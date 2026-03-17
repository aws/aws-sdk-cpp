/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/deadline/DeadlineClient.h>
#include <aws/deadline/model/FleetStatus.h>
#include <aws/deadline/model/GetFleetRequest.h>
#include <aws/deadline/model/GetFleetResult.h>
#include <aws/deadline/model/GetJobRequest.h>
#include <aws/deadline/model/GetJobResult.h>
#include <aws/deadline/model/GetLicenseEndpointRequest.h>
#include <aws/deadline/model/GetLicenseEndpointResult.h>
#include <aws/deadline/model/GetQueueFleetAssociationRequest.h>
#include <aws/deadline/model/GetQueueFleetAssociationResult.h>
#include <aws/deadline/model/GetQueueLimitAssociationRequest.h>
#include <aws/deadline/model/GetQueueLimitAssociationResult.h>
#include <aws/deadline/model/GetQueueRequest.h>
#include <aws/deadline/model/GetQueueResult.h>
#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/deadline/model/LicenseEndpointStatus.h>
#include <aws/deadline/model/QueueFleetAssociationStatus.h>
#include <aws/deadline/model/QueueLimitAssociationStatus.h>
#include <aws/deadline/model/QueueStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>

#include <algorithm>

namespace Aws {
namespace deadline {

template <typename DerivedClient = DeadlineClient>
class DeadlineWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetFleetOutcome> WaitUntilFleetActive(const Model::GetFleetRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetFleetOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetFleetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FleetStatusMapper::GetNameForFleetStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetFleetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FleetStatusMapper::GetNameForFleetStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::GetFleetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::FleetStatusMapper::GetNameForFleetStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetFleetRequest& req) { return static_cast<DerivedClient*>(this)->GetFleet(req); };
    Aws::Utils::Waiter<Model::GetFleetRequest, Model::GetFleetOutcome> waiter(5, 180, acceptors, operation, "WaitUntilFleetActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobCreateComplete(const Model::GetJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_COMPLETE"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_IN_PROGRESS"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_SUCCEEDED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPLOAD_FAILED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetJobRequest& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<Model::GetJobRequest, Model::GetJobOutcome> waiter(1, 120, acceptors, operation, "WaitUntilJobCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobComplete(const Model::GetJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CANCELED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUSPENDED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("NOT_COMPATIBLE"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ARCHIVED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetJobRequest& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<Model::GetJobRequest, Model::GetJobOutcome> waiter(15, 240, acceptors, operation, "WaitUntilJobComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobSucceeded(const Model::GetJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("SUSPENDED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("NOT_COMPATIBLE"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ARCHIVED"),
                         [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetJobRequest& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<Model::GetJobRequest, Model::GetJobOutcome> waiter(15, 240, acceptors, operation, "WaitUntilJobSucceeded");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLicenseEndpointOutcome> WaitUntilLicenseEndpointValid(
      const Model::GetLicenseEndpointRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetLicenseEndpointOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("READY"),
                         [](const Model::GetLicenseEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("NOT_READY"),
                         [](const Model::GetLicenseEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetLicenseEndpointRequest& req) {
      return static_cast<DerivedClient*>(this)->GetLicenseEndpoint(req);
    };
    Aws::Utils::Waiter<Model::GetLicenseEndpointRequest, Model::GetLicenseEndpointOutcome> waiter(10, 114, acceptors, operation,
                                                                                                  "WaitUntilLicenseEndpointValid");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLicenseEndpointOutcome> WaitUntilLicenseEndpointDeleted(
      const Model::GetLicenseEndpointRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetLicenseEndpointOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("NOT_READY"),
                         [](const Model::GetLicenseEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetLicenseEndpointRequest& req) {
      return static_cast<DerivedClient*>(this)->GetLicenseEndpoint(req);
    };
    Aws::Utils::Waiter<Model::GetLicenseEndpointRequest, Model::GetLicenseEndpointOutcome> waiter(10, 234, acceptors, operation,
                                                                                                  "WaitUntilLicenseEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueOutcome> WaitUntilQueueSchedulingBlocked(const Model::GetQueueRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetQueueOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SCHEDULING_BLOCKED"),
                         [](const Model::GetQueueOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::QueueStatusMapper::GetNameForQueueStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetQueueRequest& req) { return static_cast<DerivedClient*>(this)->GetQueue(req); };
    Aws::Utils::Waiter<Model::GetQueueRequest, Model::GetQueueOutcome> waiter(10, 30, acceptors, operation,
                                                                              "WaitUntilQueueSchedulingBlocked");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueOutcome> WaitUntilQueueScheduling(const Model::GetQueueRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetQueueOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SCHEDULING"),
                         [](const Model::GetQueueOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::QueueStatusMapper::GetNameForQueueStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetQueueRequest& req) { return static_cast<DerivedClient*>(this)->GetQueue(req); };
    Aws::Utils::Waiter<Model::GetQueueRequest, Model::GetQueueOutcome> waiter(10, 70, acceptors, operation, "WaitUntilQueueScheduling");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueFleetAssociationOutcome> WaitUntilQueueFleetAssociationStopped(
      const Model::GetQueueFleetAssociationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetQueueFleetAssociationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::GetQueueLimitAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::QueueLimitAssociationStatusMapper::GetNameForQueueLimitAssociationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetQueueFleetAssociationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetQueueFleetAssociation(req);
    };
    Aws::Utils::Waiter<Model::GetQueueFleetAssociationRequest, Model::GetQueueFleetAssociationOutcome> waiter(
        10, 60, acceptors, operation, "WaitUntilQueueFleetAssociationStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueLimitAssociationOutcome> WaitUntilQueueLimitAssociationStopped(
      const Model::GetQueueLimitAssociationRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetQueueLimitAssociationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::GetQueueLimitAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::QueueLimitAssociationStatusMapper::GetNameForQueueLimitAssociationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetQueueLimitAssociationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetQueueLimitAssociation(req);
    };
    Aws::Utils::Waiter<Model::GetQueueLimitAssociationRequest, Model::GetQueueLimitAssociationOutcome> waiter(
        10, 60, acceptors, operation, "WaitUntilQueueLimitAssociationStopped");
    return waiter.Wait(request);
  }
};
}  // namespace deadline
}  // namespace Aws

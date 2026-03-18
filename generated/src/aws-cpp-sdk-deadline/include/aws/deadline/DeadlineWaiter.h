/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetFleetOutcome;
    using RequestT = Model::GetFleetRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetFleetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FleetStatusMapper::GetNameForFleetStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetFleetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FleetStatusMapper::GetNameForFleetStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::GetFleetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::FleetStatusMapper::GetNameForFleetStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetFleet(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 180, std::move(acceptors), operation, "WaitUntilFleetActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobCreateComplete(const Model::GetJobRequest& request) {
    using OutcomeT = Model::GetJobOutcome;
    using RequestT = Model::GetJobRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETE"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_IN_PROGRESS"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_FAILED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCreateCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_SUCCEEDED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPLOAD_FAILED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCreateCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 120, std::move(acceptors), operation, "WaitUntilJobCreateComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobComplete(const Model::GetJobRequest& request) {
    using OutcomeT = Model::GetJobOutcome;
    using RequestT = Model::GetJobRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("FAILED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUSPENDED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("NOT_COMPATIBLE"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ARCHIVED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 240, std::move(acceptors), operation, "WaitUntilJobComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobSucceeded(const Model::GetJobRequest& request) {
    using OutcomeT = Model::GetJobOutcome;
    using RequestT = Model::GetJobRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSucceededWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("SUSPENDED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("NOT_COMPATIBLE"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskRunStatusMapper::GetNameForTaskRunStatus(result.GetTaskRunStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ARCHIVED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobLifecycleStatusMapper::GetNameForJobLifecycleStatus(result.GetLifecycleStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 240, std::move(acceptors), operation, "WaitUntilJobSucceeded");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLicenseEndpointOutcome> WaitUntilLicenseEndpointValid(
      const Model::GetLicenseEndpointRequest& request) {
    using OutcomeT = Model::GetLicenseEndpointOutcome;
    using RequestT = Model::GetLicenseEndpointRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LicenseEndpointValidWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("READY"),
        [](const Model::GetLicenseEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LicenseEndpointValidWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("NOT_READY"),
        [](const Model::GetLicenseEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetLicenseEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 114, std::move(acceptors), operation, "WaitUntilLicenseEndpointValid");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLicenseEndpointOutcome> WaitUntilLicenseEndpointDeleted(
      const Model::GetLicenseEndpointRequest& request) {
    using OutcomeT = Model::GetLicenseEndpointOutcome;
    using RequestT = Model::GetLicenseEndpointRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "LicenseEndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LicenseEndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("NOT_READY"),
        [](const Model::GetLicenseEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LicenseEndpointStatusMapper::GetNameForLicenseEndpointStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetLicenseEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 234, std::move(acceptors), operation, "WaitUntilLicenseEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueOutcome> WaitUntilQueueSchedulingBlocked(const Model::GetQueueRequest& request) {
    using OutcomeT = Model::GetQueueOutcome;
    using RequestT = Model::GetQueueRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "QueueSchedulingBlockedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SCHEDULING_BLOCKED"),
        [](const Model::GetQueueOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::QueueStatusMapper::GetNameForQueueStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetQueue(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 30, std::move(acceptors), operation, "WaitUntilQueueSchedulingBlocked");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueOutcome> WaitUntilQueueScheduling(const Model::GetQueueRequest& request) {
    using OutcomeT = Model::GetQueueOutcome;
    using RequestT = Model::GetQueueRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "QueueSchedulingWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SCHEDULING"),
        [](const Model::GetQueueOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::QueueStatusMapper::GetNameForQueueStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetQueue(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 70, std::move(acceptors), operation, "WaitUntilQueueScheduling");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueFleetAssociationOutcome> WaitUntilQueueFleetAssociationStopped(
      const Model::GetQueueFleetAssociationRequest& request) {
    using OutcomeT = Model::GetQueueFleetAssociationOutcome;
    using RequestT = Model::GetQueueFleetAssociationRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "QueueFleetAssociationStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STOPPED"),
        [](const Model::GetQueueLimitAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::QueueLimitAssociationStatusMapper::GetNameForQueueLimitAssociationStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetQueueFleetAssociation(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 60, std::move(acceptors), operation, "WaitUntilQueueFleetAssociationStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetQueueLimitAssociationOutcome> WaitUntilQueueLimitAssociationStopped(
      const Model::GetQueueLimitAssociationRequest& request) {
    using OutcomeT = Model::GetQueueLimitAssociationOutcome;
    using RequestT = Model::GetQueueLimitAssociationRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "QueueLimitAssociationStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STOPPED"),
        [](const Model::GetQueueLimitAssociationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::QueueLimitAssociationStatusMapper::GetNameForQueueLimitAssociationStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetQueueLimitAssociation(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 60, std::move(acceptors), operation, "WaitUntilQueueLimitAssociationStopped");
    return waiter.Wait(request);
  }
};
}  // namespace deadline
}  // namespace Aws

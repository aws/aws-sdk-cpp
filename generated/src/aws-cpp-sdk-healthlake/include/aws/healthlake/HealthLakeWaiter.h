/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/healthlake/HealthLakeClient.h>
#include <aws/healthlake/model/DatastoreStatus.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRExportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRExportJobResult.h>
#include <aws/healthlake/model/DescribeFHIRImportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRImportJobResult.h>
#include <aws/healthlake/model/JobStatus.h>

#include <algorithm>

namespace Aws {
namespace HealthLake {

template <typename DerivedClient = HealthLakeClient>
class HealthLakeWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeFHIRDatastoreOutcome> WaitUntilFHIRDatastoreActive(
      const Model::DescribeFHIRDatastoreRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFHIRDatastoreOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(
                                      result.GetDatastoreProperties().GetDatastoreStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(
                                      result.GetDatastoreProperties().GetDatastoreStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(
                                      result.GetDatastoreProperties().GetDatastoreStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFHIRDatastoreRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeFHIRDatastore(req);
    };
    Aws::Utils::Waiter<Model::DescribeFHIRDatastoreRequest, Model::DescribeFHIRDatastoreOutcome> waiter(60, 2, acceptors, operation,
                                                                                                        "WaitUntilFHIRDatastoreActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFHIRDatastoreOutcome> WaitUntilFHIRDatastoreDeleted(
      const Model::DescribeFHIRDatastoreRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFHIRDatastoreOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeFHIRDatastoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DatastoreStatusMapper::GetNameForDatastoreStatus(
                                      result.GetDatastoreProperties().GetDatastoreStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFHIRDatastoreRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeFHIRDatastore(req);
    };
    Aws::Utils::Waiter<Model::DescribeFHIRDatastoreRequest, Model::DescribeFHIRDatastoreOutcome> waiter(120, 1, acceptors, operation,
                                                                                                        "WaitUntilFHIRDatastoreDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFHIRExportJobOutcome> WaitUntilFHIRExportJobCompleted(
      const Model::DescribeFHIRExportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFHIRExportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED_WITH_ERRORS"),
                         [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCEL_COMPLETED"),
                         [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCEL_FAILED"),
                         [](const Model::DescribeFHIRExportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetExportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFHIRExportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeFHIRExportJob(req);
    };
    Aws::Utils::Waiter<Model::DescribeFHIRExportJobRequest, Model::DescribeFHIRExportJobOutcome> waiter(120, 1, acceptors, operation,
                                                                                                        "WaitUntilFHIRExportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFHIRImportJobOutcome> WaitUntilFHIRImportJobCompleted(
      const Model::DescribeFHIRImportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFHIRImportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::DescribeFHIRImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetImportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED_WITH_ERRORS"),
                         [](const Model::DescribeFHIRImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetImportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeFHIRImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::JobStatusMapper::GetNameForJobStatus(result.GetImportJobProperties().GetJobStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFHIRImportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeFHIRImportJob(req);
    };
    Aws::Utils::Waiter<Model::DescribeFHIRImportJobRequest, Model::DescribeFHIRImportJobOutcome> waiter(120, 1, acceptors, operation,
                                                                                                        "WaitUntilFHIRImportJobCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace HealthLake
}  // namespace Aws

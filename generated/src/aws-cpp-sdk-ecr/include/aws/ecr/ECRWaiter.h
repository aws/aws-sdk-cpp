/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ecr/ECRClient.h>
#include <aws/ecr/model/DescribeImageScanFindingsRequest.h>
#include <aws/ecr/model/DescribeImageScanFindingsResult.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewResult.h>
#include <aws/ecr/model/LifecyclePolicyPreviewStatus.h>
#include <aws/ecr/model/ScanStatus.h>

#include <algorithm>

namespace Aws {
namespace ECR {

template <typename DerivedClient = ECRClient>
class ECRWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeImageScanFindingsOutcome> WaitUntilImageScanComplete(
      const Model::DescribeImageScanFindingsRequest& request) {
    using OutcomeT = Model::DescribeImageScanFindingsOutcome;
    using RequestT = Model::DescribeImageScanFindingsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageScanCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETE"),
        [](const Model::DescribeImageScanFindingsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScanStatusMapper::GetNameForScanStatus(result.GetImageScanStatus().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImageScanCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeImageScanFindingsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ScanStatusMapper::GetNameForScanStatus(result.GetImageScanStatus().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeImageScanFindings(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilImageScanComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLifecyclePolicyPreviewOutcome> WaitUntilLifecyclePolicyPreviewComplete(
      const Model::GetLifecyclePolicyPreviewRequest& request) {
    using OutcomeT = Model::GetLifecyclePolicyPreviewOutcome;
    using RequestT = Model::GetLifecyclePolicyPreviewRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LifecyclePolicyPreviewCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETE"),
        [](const Model::GetLifecyclePolicyPreviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LifecyclePolicyPreviewStatusMapper::GetNameForLifecyclePolicyPreviewStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LifecyclePolicyPreviewCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetLifecyclePolicyPreviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LifecyclePolicyPreviewStatusMapper::GetNameForLifecyclePolicyPreviewStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetLifecyclePolicyPreview(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilLifecyclePolicyPreviewComplete");
    return waiter.Wait(request);
  }
};
}  // namespace ECR
}  // namespace Aws

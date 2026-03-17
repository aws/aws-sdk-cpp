/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeImageScanFindingsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETE"),
                         [](const Model::DescribeImageScanFindingsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ScanStatusMapper::GetNameForScanStatus(result.GetImageScanStatus().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::DescribeImageScanFindingsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ScanStatusMapper::GetNameForScanStatus(result.GetImageScanStatus().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeImageScanFindingsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeImageScanFindings(req);
    };
    Aws::Utils::Waiter<Model::DescribeImageScanFindingsRequest, Model::DescribeImageScanFindingsOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilImageScanComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLifecyclePolicyPreviewOutcome> WaitUntilLifecyclePolicyPreviewComplete(
      const Model::GetLifecyclePolicyPreviewRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetLifecyclePolicyPreviewOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETE"),
                         [](const Model::GetLifecyclePolicyPreviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LifecyclePolicyPreviewStatusMapper::GetNameForLifecyclePolicyPreviewStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetLifecyclePolicyPreviewOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LifecyclePolicyPreviewStatusMapper::GetNameForLifecyclePolicyPreviewStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetLifecyclePolicyPreviewRequest& req) {
      return static_cast<DerivedClient*>(this)->GetLifecyclePolicyPreview(req);
    };
    Aws::Utils::Waiter<Model::GetLifecyclePolicyPreviewRequest, Model::GetLifecyclePolicyPreviewOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilLifecyclePolicyPreviewComplete");
    return waiter.Wait(request);
  }
};
}  // namespace ECR
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/TransitioningImageTotalCount.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>The summary of the lifecycle policy preview request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LifecyclePolicyPreviewSummary">AWS
 * API Reference</a></p>
 */
class LifecyclePolicyPreviewSummary {
 public:
  AWS_ECR_API LifecyclePolicyPreviewSummary() = default;
  AWS_ECR_API LifecyclePolicyPreviewSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API LifecyclePolicyPreviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of expiring images.</p>
   */
  inline int GetExpiringImageTotalCount() const { return m_expiringImageTotalCount; }
  inline bool ExpiringImageTotalCountHasBeenSet() const { return m_expiringImageTotalCountHasBeenSet; }
  inline void SetExpiringImageTotalCount(int value) {
    m_expiringImageTotalCountHasBeenSet = true;
    m_expiringImageTotalCount = value;
  }
  inline LifecyclePolicyPreviewSummary& WithExpiringImageTotalCount(int value) {
    SetExpiringImageTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total count of images that will be transitioned to each storage class.
   * This field is only present if at least one image will be transitoned in the
   * summary.</p>
   */
  inline const Aws::Vector<TransitioningImageTotalCount>& GetTransitioningImageTotalCounts() const {
    return m_transitioningImageTotalCounts;
  }
  inline bool TransitioningImageTotalCountsHasBeenSet() const { return m_transitioningImageTotalCountsHasBeenSet; }
  template <typename TransitioningImageTotalCountsT = Aws::Vector<TransitioningImageTotalCount>>
  void SetTransitioningImageTotalCounts(TransitioningImageTotalCountsT&& value) {
    m_transitioningImageTotalCountsHasBeenSet = true;
    m_transitioningImageTotalCounts = std::forward<TransitioningImageTotalCountsT>(value);
  }
  template <typename TransitioningImageTotalCountsT = Aws::Vector<TransitioningImageTotalCount>>
  LifecyclePolicyPreviewSummary& WithTransitioningImageTotalCounts(TransitioningImageTotalCountsT&& value) {
    SetTransitioningImageTotalCounts(std::forward<TransitioningImageTotalCountsT>(value));
    return *this;
  }
  template <typename TransitioningImageTotalCountsT = TransitioningImageTotalCount>
  LifecyclePolicyPreviewSummary& AddTransitioningImageTotalCounts(TransitioningImageTotalCountsT&& value) {
    m_transitioningImageTotalCountsHasBeenSet = true;
    m_transitioningImageTotalCounts.emplace_back(std::forward<TransitioningImageTotalCountsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_expiringImageTotalCount{0};
  bool m_expiringImageTotalCountHasBeenSet = false;

  Aws::Vector<TransitioningImageTotalCount> m_transitioningImageTotalCounts;
  bool m_transitioningImageTotalCountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws

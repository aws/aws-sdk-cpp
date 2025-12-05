/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/LifecyclePolicyTargetStorageClass.h>

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
 * <p>The total count of images transitioning to a storage class.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/TransitioningImageTotalCount">AWS
 * API Reference</a></p>
 */
class TransitioningImageTotalCount {
 public:
  AWS_ECR_API TransitioningImageTotalCount() = default;
  AWS_ECR_API TransitioningImageTotalCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API TransitioningImageTotalCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target storage class.</p>
   */
  inline LifecyclePolicyTargetStorageClass GetTargetStorageClass() const { return m_targetStorageClass; }
  inline bool TargetStorageClassHasBeenSet() const { return m_targetStorageClassHasBeenSet; }
  inline void SetTargetStorageClass(LifecyclePolicyTargetStorageClass value) {
    m_targetStorageClassHasBeenSet = true;
    m_targetStorageClass = value;
  }
  inline TransitioningImageTotalCount& WithTargetStorageClass(LifecyclePolicyTargetStorageClass value) {
    SetTargetStorageClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of images transitioning to the storage class.</p>
   */
  inline int GetImageTotalCount() const { return m_imageTotalCount; }
  inline bool ImageTotalCountHasBeenSet() const { return m_imageTotalCountHasBeenSet; }
  inline void SetImageTotalCount(int value) {
    m_imageTotalCountHasBeenSet = true;
    m_imageTotalCount = value;
  }
  inline TransitioningImageTotalCount& WithImageTotalCount(int value) {
    SetImageTotalCount(value);
    return *this;
  }
  ///@}
 private:
  LifecyclePolicyTargetStorageClass m_targetStorageClass{LifecyclePolicyTargetStorageClass::NOT_SET};

  int m_imageTotalCount{0};
  bool m_targetStorageClassHasBeenSet = false;
  bool m_imageTotalCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws

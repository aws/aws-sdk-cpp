/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/CustomModelDeploymentUpdateStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p> Details about an update to a custom model deployment, including the new
 * custom model resource ARN and current update status. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomModelDeploymentUpdateDetails">AWS
 * API Reference</a></p>
 */
class CustomModelDeploymentUpdateDetails {
 public:
  AWS_BEDROCK_API CustomModelDeploymentUpdateDetails() = default;
  AWS_BEDROCK_API CustomModelDeploymentUpdateDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API CustomModelDeploymentUpdateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> ARN of the new custom model being deployed as part of the update. </p>
   */
  inline const Aws::String& GetModelArn() const { return m_modelArn; }
  inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
  template <typename ModelArnT = Aws::String>
  void SetModelArn(ModelArnT&& value) {
    m_modelArnHasBeenSet = true;
    m_modelArn = std::forward<ModelArnT>(value);
  }
  template <typename ModelArnT = Aws::String>
  CustomModelDeploymentUpdateDetails& WithModelArn(ModelArnT&& value) {
    SetModelArn(std::forward<ModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Current status of the deployment update. </p>
   */
  inline CustomModelDeploymentUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
  inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
  inline void SetUpdateStatus(CustomModelDeploymentUpdateStatus value) {
    m_updateStatusHasBeenSet = true;
    m_updateStatus = value;
  }
  inline CustomModelDeploymentUpdateDetails& WithUpdateStatus(CustomModelDeploymentUpdateStatus value) {
    SetUpdateStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelArn;
  bool m_modelArnHasBeenSet = false;

  CustomModelDeploymentUpdateStatus m_updateStatus{CustomModelDeploymentUpdateStatus::NOT_SET};
  bool m_updateStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 */
class UpdateCustomModelDeploymentRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API UpdateCustomModelDeploymentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomModelDeployment"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> ARN of the new custom model to deploy. This replaces the currently deployed
   * model. </p>
   */
  inline const Aws::String& GetModelArn() const { return m_modelArn; }
  inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
  template <typename ModelArnT = Aws::String>
  void SetModelArn(ModelArnT&& value) {
    m_modelArnHasBeenSet = true;
    m_modelArn = std::forward<ModelArnT>(value);
  }
  template <typename ModelArnT = Aws::String>
  UpdateCustomModelDeploymentRequest& WithModelArn(ModelArnT&& value) {
    SetModelArn(std::forward<ModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Identifier of the custom model deployment to update with the new custom
   * model. </p>
   */
  inline const Aws::String& GetCustomModelDeploymentIdentifier() const { return m_customModelDeploymentIdentifier; }
  inline bool CustomModelDeploymentIdentifierHasBeenSet() const { return m_customModelDeploymentIdentifierHasBeenSet; }
  template <typename CustomModelDeploymentIdentifierT = Aws::String>
  void SetCustomModelDeploymentIdentifier(CustomModelDeploymentIdentifierT&& value) {
    m_customModelDeploymentIdentifierHasBeenSet = true;
    m_customModelDeploymentIdentifier = std::forward<CustomModelDeploymentIdentifierT>(value);
  }
  template <typename CustomModelDeploymentIdentifierT = Aws::String>
  UpdateCustomModelDeploymentRequest& WithCustomModelDeploymentIdentifier(CustomModelDeploymentIdentifierT&& value) {
    SetCustomModelDeploymentIdentifier(std::forward<CustomModelDeploymentIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelArn;

  Aws::String m_customModelDeploymentIdentifier;
  bool m_modelArnHasBeenSet = false;
  bool m_customModelDeploymentIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

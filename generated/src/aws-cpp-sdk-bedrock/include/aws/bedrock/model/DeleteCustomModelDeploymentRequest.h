/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class DeleteCustomModelDeploymentRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API DeleteCustomModelDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomModelDeployment"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or name of the custom model deployment to
     * delete.</p>
     */
    inline const Aws::String& GetCustomModelDeploymentIdentifier() const { return m_customModelDeploymentIdentifier; }
    inline bool CustomModelDeploymentIdentifierHasBeenSet() const { return m_customModelDeploymentIdentifierHasBeenSet; }
    template<typename CustomModelDeploymentIdentifierT = Aws::String>
    void SetCustomModelDeploymentIdentifier(CustomModelDeploymentIdentifierT&& value) { m_customModelDeploymentIdentifierHasBeenSet = true; m_customModelDeploymentIdentifier = std::forward<CustomModelDeploymentIdentifierT>(value); }
    template<typename CustomModelDeploymentIdentifierT = Aws::String>
    DeleteCustomModelDeploymentRequest& WithCustomModelDeploymentIdentifier(CustomModelDeploymentIdentifierT&& value) { SetCustomModelDeploymentIdentifier(std::forward<CustomModelDeploymentIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customModelDeploymentIdentifier;
    bool m_customModelDeploymentIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

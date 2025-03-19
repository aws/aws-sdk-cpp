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
  class DeletePromptRouterRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API DeletePromptRouterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePromptRouter"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prompt router to delete.</p>
     */
    inline const Aws::String& GetPromptRouterArn() const { return m_promptRouterArn; }
    inline bool PromptRouterArnHasBeenSet() const { return m_promptRouterArnHasBeenSet; }
    template<typename PromptRouterArnT = Aws::String>
    void SetPromptRouterArn(PromptRouterArnT&& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = std::forward<PromptRouterArnT>(value); }
    template<typename PromptRouterArnT = Aws::String>
    DeletePromptRouterRequest& WithPromptRouterArn(PromptRouterArnT&& value) { SetPromptRouterArn(std::forward<PromptRouterArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterArn;
    bool m_promptRouterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

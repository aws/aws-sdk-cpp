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
  class GetPromptRouterRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetPromptRouterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPromptRouter"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The prompt router's ARN</p>
     */
    inline const Aws::String& GetPromptRouterArn() const{ return m_promptRouterArn; }
    inline bool PromptRouterArnHasBeenSet() const { return m_promptRouterArnHasBeenSet; }
    inline void SetPromptRouterArn(const Aws::String& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = value; }
    inline void SetPromptRouterArn(Aws::String&& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = std::move(value); }
    inline void SetPromptRouterArn(const char* value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn.assign(value); }
    inline GetPromptRouterRequest& WithPromptRouterArn(const Aws::String& value) { SetPromptRouterArn(value); return *this;}
    inline GetPromptRouterRequest& WithPromptRouterArn(Aws::String&& value) { SetPromptRouterArn(std::move(value)); return *this;}
    inline GetPromptRouterRequest& WithPromptRouterArn(const char* value) { SetPromptRouterArn(value); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterArn;
    bool m_promptRouterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

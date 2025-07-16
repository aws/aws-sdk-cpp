/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class GetBrowserRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetBrowserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBrowser"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the browser to retrieve.</p>
     */
    inline const Aws::String& GetBrowserId() const { return m_browserId; }
    inline bool BrowserIdHasBeenSet() const { return m_browserIdHasBeenSet; }
    template<typename BrowserIdT = Aws::String>
    void SetBrowserId(BrowserIdT&& value) { m_browserIdHasBeenSet = true; m_browserId = std::forward<BrowserIdT>(value); }
    template<typename BrowserIdT = Aws::String>
    GetBrowserRequest& WithBrowserId(BrowserIdT&& value) { SetBrowserId(std::forward<BrowserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserId;
    bool m_browserIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws

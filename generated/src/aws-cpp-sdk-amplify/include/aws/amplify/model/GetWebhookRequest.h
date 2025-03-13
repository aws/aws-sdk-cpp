/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p>The request structure for the get webhook request. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhookRequest">AWS
   * API Reference</a></p>
   */
  class GetWebhookRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API GetWebhookRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWebhook"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for a webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const { return m_webhookId; }
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }
    template<typename WebhookIdT = Aws::String>
    void SetWebhookId(WebhookIdT&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::forward<WebhookIdT>(value); }
    template<typename WebhookIdT = Aws::String>
    GetWebhookRequest& WithWebhookId(WebhookIdT&& value) { SetWebhookId(std::forward<WebhookIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

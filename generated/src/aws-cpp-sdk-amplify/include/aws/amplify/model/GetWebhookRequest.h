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
   * <p> The request structure for the get webhook request. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhookRequest">AWS
   * API Reference</a></p>
   */
  class GetWebhookRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API GetWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWebhook"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const{ return m_webhookId; }

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline void SetWebhookId(const Aws::String& value) { m_webhookIdHasBeenSet = true; m_webhookId = value; }

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline void SetWebhookId(Aws::String&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::move(value); }

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline void SetWebhookId(const char* value) { m_webhookIdHasBeenSet = true; m_webhookId.assign(value); }

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline GetWebhookRequest& WithWebhookId(const Aws::String& value) { SetWebhookId(value); return *this;}

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline GetWebhookRequest& WithWebhookId(Aws::String&& value) { SetWebhookId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for a webhook. </p>
     */
    inline GetWebhookRequest& WithWebhookId(const char* value) { SetWebhookId(value); return *this;}

  private:

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

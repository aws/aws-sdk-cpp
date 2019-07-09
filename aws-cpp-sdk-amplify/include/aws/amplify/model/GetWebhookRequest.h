/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Request structure for the get webhook request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhookRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API GetWebhookRequest : public AmplifyRequest
  {
  public:
    GetWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWebhook"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const{ return m_webhookId; }

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline void SetWebhookId(const Aws::String& value) { m_webhookIdHasBeenSet = true; m_webhookId = value; }

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline void SetWebhookId(Aws::String&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::move(value); }

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline void SetWebhookId(const char* value) { m_webhookIdHasBeenSet = true; m_webhookId.assign(value); }

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline GetWebhookRequest& WithWebhookId(const Aws::String& value) { SetWebhookId(value); return *this;}

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline GetWebhookRequest& WithWebhookId(Aws::String&& value) { SetWebhookId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for a webhook. </p>
     */
    inline GetWebhookRequest& WithWebhookId(const char* value) { SetWebhookId(value); return *this;}

  private:

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

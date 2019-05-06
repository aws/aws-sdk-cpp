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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class AWS_CODEPIPELINE_API DeregisterWebhookWithThirdPartyRequest : public CodePipelineRequest
  {
  public:
    DeregisterWebhookWithThirdPartyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterWebhookWithThirdParty"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline const Aws::String& GetWebhookName() const{ return m_webhookName; }

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline bool WebhookNameHasBeenSet() const { return m_webhookNameHasBeenSet; }

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline void SetWebhookName(const Aws::String& value) { m_webhookNameHasBeenSet = true; m_webhookName = value; }

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline void SetWebhookName(Aws::String&& value) { m_webhookNameHasBeenSet = true; m_webhookName = std::move(value); }

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline void SetWebhookName(const char* value) { m_webhookNameHasBeenSet = true; m_webhookName.assign(value); }

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline DeregisterWebhookWithThirdPartyRequest& WithWebhookName(const Aws::String& value) { SetWebhookName(value); return *this;}

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline DeregisterWebhookWithThirdPartyRequest& WithWebhookName(Aws::String&& value) { SetWebhookName(std::move(value)); return *this;}

    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline DeregisterWebhookWithThirdPartyRequest& WithWebhookName(const char* value) { SetWebhookName(value); return *this;}

  private:

    Aws::String m_webhookName;
    bool m_webhookNameHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

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
#include <aws/codepipeline/model/WebhookDefinition.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class AWS_CODEPIPELINE_API PutWebhookRequest : public CodePipelineRequest
  {
  public:
    PutWebhookRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWebhook"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The detail provided in an input file to create the webhook, such as the
     * webhook name, the pipeline name, and the action name. Give the webhook a unique
     * name which identifies the webhook being defined. You may choose to name the
     * webhook after the pipeline and action it targets so that you can easily
     * recognize what it's used for later.</p>
     */
    inline const WebhookDefinition& GetWebhook() const{ return m_webhook; }

    /**
     * <p>The detail provided in an input file to create the webhook, such as the
     * webhook name, the pipeline name, and the action name. Give the webhook a unique
     * name which identifies the webhook being defined. You may choose to name the
     * webhook after the pipeline and action it targets so that you can easily
     * recognize what it's used for later.</p>
     */
    inline void SetWebhook(const WebhookDefinition& value) { m_webhookHasBeenSet = true; m_webhook = value; }

    /**
     * <p>The detail provided in an input file to create the webhook, such as the
     * webhook name, the pipeline name, and the action name. Give the webhook a unique
     * name which identifies the webhook being defined. You may choose to name the
     * webhook after the pipeline and action it targets so that you can easily
     * recognize what it's used for later.</p>
     */
    inline void SetWebhook(WebhookDefinition&& value) { m_webhookHasBeenSet = true; m_webhook = std::move(value); }

    /**
     * <p>The detail provided in an input file to create the webhook, such as the
     * webhook name, the pipeline name, and the action name. Give the webhook a unique
     * name which identifies the webhook being defined. You may choose to name the
     * webhook after the pipeline and action it targets so that you can easily
     * recognize what it's used for later.</p>
     */
    inline PutWebhookRequest& WithWebhook(const WebhookDefinition& value) { SetWebhook(value); return *this;}

    /**
     * <p>The detail provided in an input file to create the webhook, such as the
     * webhook name, the pipeline name, and the action name. Give the webhook a unique
     * name which identifies the webhook being defined. You may choose to name the
     * webhook after the pipeline and action it targets so that you can easily
     * recognize what it's used for later.</p>
     */
    inline PutWebhookRequest& WithWebhook(WebhookDefinition&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    WebhookDefinition m_webhook;
    bool m_webhookHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

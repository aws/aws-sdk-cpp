/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/WebhookDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class PutWebhookRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API PutWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWebhook"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The detail provided in an input file to create the webhook, such as the
     * webhook name, the pipeline name, and the action name. Give the webhook a unique
     * name that helps you identify it. You might name the webhook after the pipeline
     * and action it targets so that you can easily recognize what it's used for
     * later.</p>
     */
    inline const WebhookDefinition& GetWebhook() const{ return m_webhook; }
    inline bool WebhookHasBeenSet() const { return m_webhookHasBeenSet; }
    inline void SetWebhook(const WebhookDefinition& value) { m_webhookHasBeenSet = true; m_webhook = value; }
    inline void SetWebhook(WebhookDefinition&& value) { m_webhookHasBeenSet = true; m_webhook = std::move(value); }
    inline PutWebhookRequest& WithWebhook(const WebhookDefinition& value) { SetWebhook(value); return *this;}
    inline PutWebhookRequest& WithWebhook(WebhookDefinition&& value) { SetWebhook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the webhook.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutWebhookRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutWebhookRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutWebhookRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutWebhookRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    WebhookDefinition m_webhook;
    bool m_webhookHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

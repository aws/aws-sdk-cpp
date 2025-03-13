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
    AWS_CODEPIPELINE_API PutWebhookRequest() = default;

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
    inline const WebhookDefinition& GetWebhook() const { return m_webhook; }
    inline bool WebhookHasBeenSet() const { return m_webhookHasBeenSet; }
    template<typename WebhookT = WebhookDefinition>
    void SetWebhook(WebhookT&& value) { m_webhookHasBeenSet = true; m_webhook = std::forward<WebhookT>(value); }
    template<typename WebhookT = WebhookDefinition>
    PutWebhookRequest& WithWebhook(WebhookT&& value) { SetWebhook(std::forward<WebhookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the webhook.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutWebhookRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutWebhookRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

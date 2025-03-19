/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeregisterWebhookWithThirdPartyRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API DeregisterWebhookWithThirdPartyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterWebhookWithThirdParty"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the webhook you want to deregister.</p>
     */
    inline const Aws::String& GetWebhookName() const { return m_webhookName; }
    inline bool WebhookNameHasBeenSet() const { return m_webhookNameHasBeenSet; }
    template<typename WebhookNameT = Aws::String>
    void SetWebhookName(WebhookNameT&& value) { m_webhookNameHasBeenSet = true; m_webhookName = std::forward<WebhookNameT>(value); }
    template<typename WebhookNameT = Aws::String>
    DeregisterWebhookWithThirdPartyRequest& WithWebhookName(WebhookNameT&& value) { SetWebhookName(std::forward<WebhookNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webhookName;
    bool m_webhookNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

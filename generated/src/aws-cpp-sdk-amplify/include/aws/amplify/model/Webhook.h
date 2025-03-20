/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes a webhook that connects repository events to an Amplify app.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Webhook">AWS API
   * Reference</a></p>
   */
  class Webhook
  {
  public:
    AWS_AMPLIFY_API Webhook() = default;
    AWS_AMPLIFY_API Webhook(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the webhook. </p>
     */
    inline const Aws::String& GetWebhookArn() const { return m_webhookArn; }
    inline bool WebhookArnHasBeenSet() const { return m_webhookArnHasBeenSet; }
    template<typename WebhookArnT = Aws::String>
    void SetWebhookArn(WebhookArnT&& value) { m_webhookArnHasBeenSet = true; m_webhookArn = std::forward<WebhookArnT>(value); }
    template<typename WebhookArnT = Aws::String>
    Webhook& WithWebhookArn(WebhookArnT&& value) { SetWebhookArn(std::forward<WebhookArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const { return m_webhookId; }
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }
    template<typename WebhookIdT = Aws::String>
    void SetWebhookId(WebhookIdT&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::forward<WebhookIdT>(value); }
    template<typename WebhookIdT = Aws::String>
    Webhook& WithWebhookId(WebhookIdT&& value) { SetWebhookId(std::forward<WebhookIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the webhook. </p>
     */
    inline const Aws::String& GetWebhookUrl() const { return m_webhookUrl; }
    inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
    template<typename WebhookUrlT = Aws::String>
    void SetWebhookUrl(WebhookUrlT&& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = std::forward<WebhookUrlT>(value); }
    template<typename WebhookUrlT = Aws::String>
    Webhook& WithWebhookUrl(WebhookUrlT&& value) { SetWebhookUrl(std::forward<WebhookUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of an Amplify app.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    Webhook& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    Webhook& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for a webhook. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Webhook& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the webhook in your Git repository.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Webhook& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify updated the webhook in your Git repository.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Webhook& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webhookArn;
    bool m_webhookArnHasBeenSet = false;

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet = false;

    Aws::String m_webhookUrl;
    bool m_webhookUrlHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

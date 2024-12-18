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
    AWS_AMPLIFY_API Webhook();
    AWS_AMPLIFY_API Webhook(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the webhook. </p>
     */
    inline const Aws::String& GetWebhookArn() const{ return m_webhookArn; }
    inline bool WebhookArnHasBeenSet() const { return m_webhookArnHasBeenSet; }
    inline void SetWebhookArn(const Aws::String& value) { m_webhookArnHasBeenSet = true; m_webhookArn = value; }
    inline void SetWebhookArn(Aws::String&& value) { m_webhookArnHasBeenSet = true; m_webhookArn = std::move(value); }
    inline void SetWebhookArn(const char* value) { m_webhookArnHasBeenSet = true; m_webhookArn.assign(value); }
    inline Webhook& WithWebhookArn(const Aws::String& value) { SetWebhookArn(value); return *this;}
    inline Webhook& WithWebhookArn(Aws::String&& value) { SetWebhookArn(std::move(value)); return *this;}
    inline Webhook& WithWebhookArn(const char* value) { SetWebhookArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const{ return m_webhookId; }
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }
    inline void SetWebhookId(const Aws::String& value) { m_webhookIdHasBeenSet = true; m_webhookId = value; }
    inline void SetWebhookId(Aws::String&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::move(value); }
    inline void SetWebhookId(const char* value) { m_webhookIdHasBeenSet = true; m_webhookId.assign(value); }
    inline Webhook& WithWebhookId(const Aws::String& value) { SetWebhookId(value); return *this;}
    inline Webhook& WithWebhookId(Aws::String&& value) { SetWebhookId(std::move(value)); return *this;}
    inline Webhook& WithWebhookId(const char* value) { SetWebhookId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the webhook. </p>
     */
    inline const Aws::String& GetWebhookUrl() const{ return m_webhookUrl; }
    inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
    inline void SetWebhookUrl(const Aws::String& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = value; }
    inline void SetWebhookUrl(Aws::String&& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = std::move(value); }
    inline void SetWebhookUrl(const char* value) { m_webhookUrlHasBeenSet = true; m_webhookUrl.assign(value); }
    inline Webhook& WithWebhookUrl(const Aws::String& value) { SetWebhookUrl(value); return *this;}
    inline Webhook& WithWebhookUrl(Aws::String&& value) { SetWebhookUrl(std::move(value)); return *this;}
    inline Webhook& WithWebhookUrl(const char* value) { SetWebhookUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline Webhook& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline Webhook& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline Webhook& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for a webhook. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Webhook& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Webhook& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Webhook& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the webhook in your Git repository.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline Webhook& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline Webhook& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify updated the webhook in your Git repository.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline Webhook& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline Webhook& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_webhookArn;
    bool m_webhookArnHasBeenSet = false;

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet = false;

    Aws::String m_webhookUrl;
    bool m_webhookUrlHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

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
   * <p> Structure for webhook, which associates a webhook with an Amplify App.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Webhook">AWS API
   * Reference</a></p>
   */
  class AWS_AMPLIFY_API Webhook
  {
  public:
    Webhook();
    Webhook(Aws::Utils::Json::JsonView jsonValue);
    Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> ARN for the webhook. </p>
     */
    inline const Aws::String& GetWebhookArn() const{ return m_webhookArn; }

    /**
     * <p> ARN for the webhook. </p>
     */
    inline bool WebhookArnHasBeenSet() const { return m_webhookArnHasBeenSet; }

    /**
     * <p> ARN for the webhook. </p>
     */
    inline void SetWebhookArn(const Aws::String& value) { m_webhookArnHasBeenSet = true; m_webhookArn = value; }

    /**
     * <p> ARN for the webhook. </p>
     */
    inline void SetWebhookArn(Aws::String&& value) { m_webhookArnHasBeenSet = true; m_webhookArn = std::move(value); }

    /**
     * <p> ARN for the webhook. </p>
     */
    inline void SetWebhookArn(const char* value) { m_webhookArnHasBeenSet = true; m_webhookArn.assign(value); }

    /**
     * <p> ARN for the webhook. </p>
     */
    inline Webhook& WithWebhookArn(const Aws::String& value) { SetWebhookArn(value); return *this;}

    /**
     * <p> ARN for the webhook. </p>
     */
    inline Webhook& WithWebhookArn(Aws::String&& value) { SetWebhookArn(std::move(value)); return *this;}

    /**
     * <p> ARN for the webhook. </p>
     */
    inline Webhook& WithWebhookArn(const char* value) { SetWebhookArn(value); return *this;}


    /**
     * <p> Id of the webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const{ return m_webhookId; }

    /**
     * <p> Id of the webhook. </p>
     */
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }

    /**
     * <p> Id of the webhook. </p>
     */
    inline void SetWebhookId(const Aws::String& value) { m_webhookIdHasBeenSet = true; m_webhookId = value; }

    /**
     * <p> Id of the webhook. </p>
     */
    inline void SetWebhookId(Aws::String&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::move(value); }

    /**
     * <p> Id of the webhook. </p>
     */
    inline void SetWebhookId(const char* value) { m_webhookIdHasBeenSet = true; m_webhookId.assign(value); }

    /**
     * <p> Id of the webhook. </p>
     */
    inline Webhook& WithWebhookId(const Aws::String& value) { SetWebhookId(value); return *this;}

    /**
     * <p> Id of the webhook. </p>
     */
    inline Webhook& WithWebhookId(Aws::String&& value) { SetWebhookId(std::move(value)); return *this;}

    /**
     * <p> Id of the webhook. </p>
     */
    inline Webhook& WithWebhookId(const char* value) { SetWebhookId(value); return *this;}


    /**
     * <p> Url of the webhook. </p>
     */
    inline const Aws::String& GetWebhookUrl() const{ return m_webhookUrl; }

    /**
     * <p> Url of the webhook. </p>
     */
    inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }

    /**
     * <p> Url of the webhook. </p>
     */
    inline void SetWebhookUrl(const Aws::String& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = value; }

    /**
     * <p> Url of the webhook. </p>
     */
    inline void SetWebhookUrl(Aws::String&& value) { m_webhookUrlHasBeenSet = true; m_webhookUrl = std::move(value); }

    /**
     * <p> Url of the webhook. </p>
     */
    inline void SetWebhookUrl(const char* value) { m_webhookUrlHasBeenSet = true; m_webhookUrl.assign(value); }

    /**
     * <p> Url of the webhook. </p>
     */
    inline Webhook& WithWebhookUrl(const Aws::String& value) { SetWebhookUrl(value); return *this;}

    /**
     * <p> Url of the webhook. </p>
     */
    inline Webhook& WithWebhookUrl(Aws::String&& value) { SetWebhookUrl(std::move(value)); return *this;}

    /**
     * <p> Url of the webhook. </p>
     */
    inline Webhook& WithWebhookUrl(const char* value) { SetWebhookUrl(value); return *this;}


    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline Webhook& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline Webhook& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline Webhook& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> Description for a webhook. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description for a webhook. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description for a webhook. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description for a webhook. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description for a webhook. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description for a webhook. </p>
     */
    inline Webhook& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for a webhook. </p>
     */
    inline Webhook& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for a webhook. </p>
     */
    inline Webhook& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Create date / time for a webhook. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p> Create date / time for a webhook. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p> Create date / time for a webhook. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p> Create date / time for a webhook. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p> Create date / time for a webhook. </p>
     */
    inline Webhook& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p> Create date / time for a webhook. </p>
     */
    inline Webhook& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p> Update date / time for a webhook. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> Update date / time for a webhook. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> Update date / time for a webhook. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> Update date / time for a webhook. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> Update date / time for a webhook. </p>
     */
    inline Webhook& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> Update date / time for a webhook. </p>
     */
    inline Webhook& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_webhookArn;
    bool m_webhookArnHasBeenSet;

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet;

    Aws::String m_webhookUrl;
    bool m_webhookUrlHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

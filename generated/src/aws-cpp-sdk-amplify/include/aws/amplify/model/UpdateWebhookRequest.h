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
   * <p>The request structure for the update webhook request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhookRequest">AWS
   * API Reference</a></p>
   */
  class UpdateWebhookRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API UpdateWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebhook"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for a webhook. </p>
     */
    inline const Aws::String& GetWebhookId() const{ return m_webhookId; }
    inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }
    inline void SetWebhookId(const Aws::String& value) { m_webhookIdHasBeenSet = true; m_webhookId = value; }
    inline void SetWebhookId(Aws::String&& value) { m_webhookIdHasBeenSet = true; m_webhookId = std::move(value); }
    inline void SetWebhookId(const char* value) { m_webhookIdHasBeenSet = true; m_webhookId.assign(value); }
    inline UpdateWebhookRequest& WithWebhookId(const Aws::String& value) { SetWebhookId(value); return *this;}
    inline UpdateWebhookRequest& WithWebhookId(Aws::String&& value) { SetWebhookId(std::move(value)); return *this;}
    inline UpdateWebhookRequest& WithWebhookId(const char* value) { SetWebhookId(value); return *this;}
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
    inline UpdateWebhookRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline UpdateWebhookRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline UpdateWebhookRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}
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
    inline UpdateWebhookRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateWebhookRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateWebhookRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_webhookId;
    bool m_webhookIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

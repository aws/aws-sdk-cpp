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
   * <p> The request structure for the create webhook request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhookRequest">AWS
   * API Reference</a></p>
   */
  class CreateWebhookRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API CreateWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebhook"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline CreateWebhookRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline CreateWebhookRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline CreateWebhookRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline CreateWebhookRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline CreateWebhookRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> The name for a branch that is part of an Amplify app. </p>
     */
    inline CreateWebhookRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> The description for a webhook. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description for a webhook. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description for a webhook. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description for a webhook. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description for a webhook. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description for a webhook. </p>
     */
    inline CreateWebhookRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description for a webhook. </p>
     */
    inline CreateWebhookRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description for a webhook. </p>
     */
    inline CreateWebhookRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

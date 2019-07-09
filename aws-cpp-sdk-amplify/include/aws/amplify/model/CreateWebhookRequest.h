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
   * <p> Request structure for create webhook request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateWebhookRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API CreateWebhookRequest : public AmplifyRequest
  {
  public:
    CreateWebhookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebhook"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline CreateWebhookRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline CreateWebhookRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline CreateWebhookRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


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
    inline CreateWebhookRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline CreateWebhookRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Name for a branch, part of an Amplify App. </p>
     */
    inline CreateWebhookRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


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
    inline CreateWebhookRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for a webhook. </p>
     */
    inline CreateWebhookRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for a webhook. </p>
     */
    inline CreateWebhookRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws

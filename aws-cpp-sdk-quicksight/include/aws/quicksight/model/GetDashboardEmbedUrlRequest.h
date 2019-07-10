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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IdentityType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API GetDashboardEmbedUrlRequest : public QuickSightRequest
  {
  public:
    GetDashboardEmbedUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboardEmbedUrl"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>AWS account ID that contains the dashboard you are embedding.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline GetDashboardEmbedUrlRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline GetDashboardEmbedUrlRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard, also added to IAM policy</p>
     */
    inline GetDashboardEmbedUrlRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The authentication method the user uses to sign in (IAM only).</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The authentication method the user uses to sign in (IAM only).</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>The authentication method the user uses to sign in (IAM only).</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The authentication method the user uses to sign in (IAM only).</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>The authentication method the user uses to sign in (IAM only).</p>
     */
    inline GetDashboardEmbedUrlRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The authentication method the user uses to sign in (IAM only).</p>
     */
    inline GetDashboardEmbedUrlRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>How many minutes the session is valid. The session lifetime must be between
     * 15 and 600 minutes.</p>
     */
    inline long long GetSessionLifetimeInMinutes() const{ return m_sessionLifetimeInMinutes; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be between
     * 15 and 600 minutes.</p>
     */
    inline bool SessionLifetimeInMinutesHasBeenSet() const { return m_sessionLifetimeInMinutesHasBeenSet; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be between
     * 15 and 600 minutes.</p>
     */
    inline void SetSessionLifetimeInMinutes(long long value) { m_sessionLifetimeInMinutesHasBeenSet = true; m_sessionLifetimeInMinutes = value; }

    /**
     * <p>How many minutes the session is valid. The session lifetime must be between
     * 15 and 600 minutes.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithSessionLifetimeInMinutes(long long value) { SetSessionLifetimeInMinutes(value); return *this;}


    /**
     * <p>Remove the undo/redo button on embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline bool GetUndoRedoDisabled() const{ return m_undoRedoDisabled; }

    /**
     * <p>Remove the undo/redo button on embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline bool UndoRedoDisabledHasBeenSet() const { return m_undoRedoDisabledHasBeenSet; }

    /**
     * <p>Remove the undo/redo button on embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline void SetUndoRedoDisabled(bool value) { m_undoRedoDisabledHasBeenSet = true; m_undoRedoDisabled = value; }

    /**
     * <p>Remove the undo/redo button on embedded dashboard. The default is FALSE,
     * which enables the undo/redo button.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithUndoRedoDisabled(bool value) { SetUndoRedoDisabled(value); return *this;}


    /**
     * <p>Remove the reset button on embedded dashboard. The default is FALSE, which
     * allows the reset button.</p>
     */
    inline bool GetResetDisabled() const{ return m_resetDisabled; }

    /**
     * <p>Remove the reset button on embedded dashboard. The default is FALSE, which
     * allows the reset button.</p>
     */
    inline bool ResetDisabledHasBeenSet() const { return m_resetDisabledHasBeenSet; }

    /**
     * <p>Remove the reset button on embedded dashboard. The default is FALSE, which
     * allows the reset button.</p>
     */
    inline void SetResetDisabled(bool value) { m_resetDisabledHasBeenSet = true; m_resetDisabled = value; }

    /**
     * <p>Remove the reset button on embedded dashboard. The default is FALSE, which
     * allows the reset button.</p>
     */
    inline GetDashboardEmbedUrlRequest& WithResetDisabled(bool value) { SetResetDisabled(value); return *this;}


    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline GetDashboardEmbedUrlRequest& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline GetDashboardEmbedUrlRequest& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight user's ARN, for use with <code>QUICKSIGHT</code>
     * identity type. You can use this for any of the following:</p> <ul> <li>
     * <p>Amazon QuickSight users in your account (readers, authors, or admins)</p>
     * </li> <li> <p>AD users</p> </li> <li> <p>Invited non-federated users</p> </li>
     * <li> <p>Federated IAM users</p> </li> <li> <p>Federated IAM role-based
     * sessions</p> </li> </ul>
     */
    inline GetDashboardEmbedUrlRequest& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet;

    long long m_sessionLifetimeInMinutes;
    bool m_sessionLifetimeInMinutesHasBeenSet;

    bool m_undoRedoDisabled;
    bool m_undoRedoDisabledHasBeenSet;

    bool m_resetDisabled;
    bool m_resetDisabledHasBeenSet;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

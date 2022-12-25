/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/MemberStatus.h>
#include <aws/detective/model/MemberDisabledReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/detective/model/InvitationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/detective/model/DatasourcePackage.h>
#include <aws/detective/model/DatasourcePackageUsageInfo.h>
#include <aws/detective/model/DatasourcePackageIngestState.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details about a member account in a behavior graph.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/MemberDetail">AWS
   * API Reference</a></p>
   */
  class MemberDetail
  {
  public:
    AWS_DETECTIVE_API MemberDetail();
    AWS_DETECTIVE_API MemberDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API MemberDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline MemberDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline MemberDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline MemberDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline MemberDetail& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline MemberDetail& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline MemberDetail& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline MemberDetail& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline MemberDetail& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline MemberDetail& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline const Aws::String& GetAdministratorId() const{ return m_administratorId; }

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline void SetAdministratorId(const Aws::String& value) { m_administratorIdHasBeenSet = true; m_administratorId = value; }

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline void SetAdministratorId(Aws::String&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline void SetAdministratorId(const char* value) { m_administratorIdHasBeenSet = true; m_administratorId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline MemberDetail& WithAdministratorId(const Aws::String& value) { SetAdministratorId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline MemberDetail& WithAdministratorId(Aws::String&& value) { SetAdministratorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline MemberDetail& WithAdministratorId(const char* value) { SetAdministratorId(value); return *this;}


    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - For invited
     * accounts only. Indicates that the member was sent an invitation but has not yet
     * responded.</p> </li> <li> <p> <code>VERIFICATION_IN_PROGRESS</code> - For
     * invited accounts only, indicates that Detective is verifying that the account
     * identifier and email address provided for the member account match. If they do
     * match, then Detective sends the invitation. If the email address and account
     * identifier don't match, then the member cannot be added to the behavior
     * graph.</p> <p>For organization accounts in the organization behavior graph,
     * indicates that Detective is verifying that the account belongs to the
     * organization.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> - For invited
     * accounts only. Indicates that the account and email address provided for the
     * member account do not match, and Detective did not send an invitation to the
     * account.</p> </li> <li> <p> <code>ENABLED</code> - Indicates that the member
     * account currently contributes data to the behavior graph. For invited accounts,
     * the member account accepted the invitation. For organization accounts in the
     * organization behavior graph, the Detective administrator account enabled the
     * organization account as a member account.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - The account accepted the invitation, or was
     * enabled by the Detective administrator account, but is prevented from
     * contributing data to the behavior graph. <code>DisabledReason</code> provides
     * the reason why the member account is not enabled.</p> </li> </ul> <p>Invited
     * accounts that declined an invitation or that were removed from the behavior
     * graph are not included. In the organization behavior graph, organization
     * accounts that the Detective administrator account did not enable are not
     * included.</p>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - For invited
     * accounts only. Indicates that the member was sent an invitation but has not yet
     * responded.</p> </li> <li> <p> <code>VERIFICATION_IN_PROGRESS</code> - For
     * invited accounts only, indicates that Detective is verifying that the account
     * identifier and email address provided for the member account match. If they do
     * match, then Detective sends the invitation. If the email address and account
     * identifier don't match, then the member cannot be added to the behavior
     * graph.</p> <p>For organization accounts in the organization behavior graph,
     * indicates that Detective is verifying that the account belongs to the
     * organization.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> - For invited
     * accounts only. Indicates that the account and email address provided for the
     * member account do not match, and Detective did not send an invitation to the
     * account.</p> </li> <li> <p> <code>ENABLED</code> - Indicates that the member
     * account currently contributes data to the behavior graph. For invited accounts,
     * the member account accepted the invitation. For organization accounts in the
     * organization behavior graph, the Detective administrator account enabled the
     * organization account as a member account.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - The account accepted the invitation, or was
     * enabled by the Detective administrator account, but is prevented from
     * contributing data to the behavior graph. <code>DisabledReason</code> provides
     * the reason why the member account is not enabled.</p> </li> </ul> <p>Invited
     * accounts that declined an invitation or that were removed from the behavior
     * graph are not included. In the organization behavior graph, organization
     * accounts that the Detective administrator account did not enable are not
     * included.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - For invited
     * accounts only. Indicates that the member was sent an invitation but has not yet
     * responded.</p> </li> <li> <p> <code>VERIFICATION_IN_PROGRESS</code> - For
     * invited accounts only, indicates that Detective is verifying that the account
     * identifier and email address provided for the member account match. If they do
     * match, then Detective sends the invitation. If the email address and account
     * identifier don't match, then the member cannot be added to the behavior
     * graph.</p> <p>For organization accounts in the organization behavior graph,
     * indicates that Detective is verifying that the account belongs to the
     * organization.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> - For invited
     * accounts only. Indicates that the account and email address provided for the
     * member account do not match, and Detective did not send an invitation to the
     * account.</p> </li> <li> <p> <code>ENABLED</code> - Indicates that the member
     * account currently contributes data to the behavior graph. For invited accounts,
     * the member account accepted the invitation. For organization accounts in the
     * organization behavior graph, the Detective administrator account enabled the
     * organization account as a member account.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - The account accepted the invitation, or was
     * enabled by the Detective administrator account, but is prevented from
     * contributing data to the behavior graph. <code>DisabledReason</code> provides
     * the reason why the member account is not enabled.</p> </li> </ul> <p>Invited
     * accounts that declined an invitation or that were removed from the behavior
     * graph are not included. In the organization behavior graph, organization
     * accounts that the Detective administrator account did not enable are not
     * included.</p>
     */
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - For invited
     * accounts only. Indicates that the member was sent an invitation but has not yet
     * responded.</p> </li> <li> <p> <code>VERIFICATION_IN_PROGRESS</code> - For
     * invited accounts only, indicates that Detective is verifying that the account
     * identifier and email address provided for the member account match. If they do
     * match, then Detective sends the invitation. If the email address and account
     * identifier don't match, then the member cannot be added to the behavior
     * graph.</p> <p>For organization accounts in the organization behavior graph,
     * indicates that Detective is verifying that the account belongs to the
     * organization.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> - For invited
     * accounts only. Indicates that the account and email address provided for the
     * member account do not match, and Detective did not send an invitation to the
     * account.</p> </li> <li> <p> <code>ENABLED</code> - Indicates that the member
     * account currently contributes data to the behavior graph. For invited accounts,
     * the member account accepted the invitation. For organization accounts in the
     * organization behavior graph, the Detective administrator account enabled the
     * organization account as a member account.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - The account accepted the invitation, or was
     * enabled by the Detective administrator account, but is prevented from
     * contributing data to the behavior graph. <code>DisabledReason</code> provides
     * the reason why the member account is not enabled.</p> </li> </ul> <p>Invited
     * accounts that declined an invitation or that were removed from the behavior
     * graph are not included. In the organization behavior graph, organization
     * accounts that the Detective administrator account did not enable are not
     * included.</p>
     */
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - For invited
     * accounts only. Indicates that the member was sent an invitation but has not yet
     * responded.</p> </li> <li> <p> <code>VERIFICATION_IN_PROGRESS</code> - For
     * invited accounts only, indicates that Detective is verifying that the account
     * identifier and email address provided for the member account match. If they do
     * match, then Detective sends the invitation. If the email address and account
     * identifier don't match, then the member cannot be added to the behavior
     * graph.</p> <p>For organization accounts in the organization behavior graph,
     * indicates that Detective is verifying that the account belongs to the
     * organization.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> - For invited
     * accounts only. Indicates that the account and email address provided for the
     * member account do not match, and Detective did not send an invitation to the
     * account.</p> </li> <li> <p> <code>ENABLED</code> - Indicates that the member
     * account currently contributes data to the behavior graph. For invited accounts,
     * the member account accepted the invitation. For organization accounts in the
     * organization behavior graph, the Detective administrator account enabled the
     * organization account as a member account.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - The account accepted the invitation, or was
     * enabled by the Detective administrator account, but is prevented from
     * contributing data to the behavior graph. <code>DisabledReason</code> provides
     * the reason why the member account is not enabled.</p> </li> </ul> <p>Invited
     * accounts that declined an invitation or that were removed from the behavior
     * graph are not included. In the organization behavior graph, organization
     * accounts that the Detective administrator account did not enable are not
     * included.</p>
     */
    inline MemberDetail& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - For invited
     * accounts only. Indicates that the member was sent an invitation but has not yet
     * responded.</p> </li> <li> <p> <code>VERIFICATION_IN_PROGRESS</code> - For
     * invited accounts only, indicates that Detective is verifying that the account
     * identifier and email address provided for the member account match. If they do
     * match, then Detective sends the invitation. If the email address and account
     * identifier don't match, then the member cannot be added to the behavior
     * graph.</p> <p>For organization accounts in the organization behavior graph,
     * indicates that Detective is verifying that the account belongs to the
     * organization.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> - For invited
     * accounts only. Indicates that the account and email address provided for the
     * member account do not match, and Detective did not send an invitation to the
     * account.</p> </li> <li> <p> <code>ENABLED</code> - Indicates that the member
     * account currently contributes data to the behavior graph. For invited accounts,
     * the member account accepted the invitation. For organization accounts in the
     * organization behavior graph, the Detective administrator account enabled the
     * organization account as a member account.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - The account accepted the invitation, or was
     * enabled by the Detective administrator account, but is prevented from
     * contributing data to the behavior graph. <code>DisabledReason</code> provides
     * the reason why the member account is not enabled.</p> </li> </ul> <p>Invited
     * accounts that declined an invitation or that were removed from the behavior
     * graph are not included. In the organization behavior graph, organization
     * accounts that the Detective administrator account did not enable are not
     * included.</p>
     */
    inline MemberDetail& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>For member accounts with a status of <code>ACCEPTED_BUT_DISABLED</code>, the
     * reason that the member account is not enabled.</p> <p>The reason can have one of
     * the following values:</p> <ul> <li> <p> <code>VOLUME_TOO_HIGH</code> - Indicates
     * that adding the member account would cause the data volume for the behavior
     * graph to be too high.</p> </li> <li> <p> <code>VOLUME_UNKNOWN</code> - Indicates
     * that Detective is unable to verify the data volume for the member account. This
     * is usually because the member account is not enrolled in Amazon GuardDuty. </p>
     * </li> </ul>
     */
    inline const MemberDisabledReason& GetDisabledReason() const{ return m_disabledReason; }

    /**
     * <p>For member accounts with a status of <code>ACCEPTED_BUT_DISABLED</code>, the
     * reason that the member account is not enabled.</p> <p>The reason can have one of
     * the following values:</p> <ul> <li> <p> <code>VOLUME_TOO_HIGH</code> - Indicates
     * that adding the member account would cause the data volume for the behavior
     * graph to be too high.</p> </li> <li> <p> <code>VOLUME_UNKNOWN</code> - Indicates
     * that Detective is unable to verify the data volume for the member account. This
     * is usually because the member account is not enrolled in Amazon GuardDuty. </p>
     * </li> </ul>
     */
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }

    /**
     * <p>For member accounts with a status of <code>ACCEPTED_BUT_DISABLED</code>, the
     * reason that the member account is not enabled.</p> <p>The reason can have one of
     * the following values:</p> <ul> <li> <p> <code>VOLUME_TOO_HIGH</code> - Indicates
     * that adding the member account would cause the data volume for the behavior
     * graph to be too high.</p> </li> <li> <p> <code>VOLUME_UNKNOWN</code> - Indicates
     * that Detective is unable to verify the data volume for the member account. This
     * is usually because the member account is not enrolled in Amazon GuardDuty. </p>
     * </li> </ul>
     */
    inline void SetDisabledReason(const MemberDisabledReason& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }

    /**
     * <p>For member accounts with a status of <code>ACCEPTED_BUT_DISABLED</code>, the
     * reason that the member account is not enabled.</p> <p>The reason can have one of
     * the following values:</p> <ul> <li> <p> <code>VOLUME_TOO_HIGH</code> - Indicates
     * that adding the member account would cause the data volume for the behavior
     * graph to be too high.</p> </li> <li> <p> <code>VOLUME_UNKNOWN</code> - Indicates
     * that Detective is unable to verify the data volume for the member account. This
     * is usually because the member account is not enrolled in Amazon GuardDuty. </p>
     * </li> </ul>
     */
    inline void SetDisabledReason(MemberDisabledReason&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::move(value); }

    /**
     * <p>For member accounts with a status of <code>ACCEPTED_BUT_DISABLED</code>, the
     * reason that the member account is not enabled.</p> <p>The reason can have one of
     * the following values:</p> <ul> <li> <p> <code>VOLUME_TOO_HIGH</code> - Indicates
     * that adding the member account would cause the data volume for the behavior
     * graph to be too high.</p> </li> <li> <p> <code>VOLUME_UNKNOWN</code> - Indicates
     * that Detective is unable to verify the data volume for the member account. This
     * is usually because the member account is not enrolled in Amazon GuardDuty. </p>
     * </li> </ul>
     */
    inline MemberDetail& WithDisabledReason(const MemberDisabledReason& value) { SetDisabledReason(value); return *this;}

    /**
     * <p>For member accounts with a status of <code>ACCEPTED_BUT_DISABLED</code>, the
     * reason that the member account is not enabled.</p> <p>The reason can have one of
     * the following values:</p> <ul> <li> <p> <code>VOLUME_TOO_HIGH</code> - Indicates
     * that adding the member account would cause the data volume for the behavior
     * graph to be too high.</p> </li> <li> <p> <code>VOLUME_UNKNOWN</code> - Indicates
     * that Detective is unable to verify the data volume for the member account. This
     * is usually because the member account is not enrolled in Amazon GuardDuty. </p>
     * </li> </ul>
     */
    inline MemberDetail& WithDisabledReason(MemberDisabledReason&& value) { SetDisabledReason(std::move(value)); return *this;}


    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedTime() const{ return m_invitedTime; }

    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline bool InvitedTimeHasBeenSet() const { return m_invitedTimeHasBeenSet; }

    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetInvitedTime(const Aws::Utils::DateTime& value) { m_invitedTimeHasBeenSet = true; m_invitedTime = value; }

    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetInvitedTime(Aws::Utils::DateTime&& value) { m_invitedTimeHasBeenSet = true; m_invitedTime = std::move(value); }

    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline MemberDetail& WithInvitedTime(const Aws::Utils::DateTime& value) { SetInvitedTime(value); return *this;}

    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline MemberDetail& WithInvitedTime(Aws::Utils::DateTime&& value) { SetInvitedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }

    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline MemberDetail& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline MemberDetail& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline const InvitationType& GetInvitationType() const{ return m_invitationType; }

    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline bool InvitationTypeHasBeenSet() const { return m_invitationTypeHasBeenSet; }

    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline void SetInvitationType(const InvitationType& value) { m_invitationTypeHasBeenSet = true; m_invitationType = value; }

    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline void SetInvitationType(InvitationType&& value) { m_invitationTypeHasBeenSet = true; m_invitationType = std::move(value); }

    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline MemberDetail& WithInvitationType(const InvitationType& value) { SetInvitationType(value); return *this;}

    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline MemberDetail& WithInvitationType(InvitationType&& value) { SetInvitationType(std::move(value)); return *this;}


    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>& GetVolumeUsageByDatasourcePackage() const{ return m_volumeUsageByDatasourcePackage; }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline bool VolumeUsageByDatasourcePackageHasBeenSet() const { return m_volumeUsageByDatasourcePackageHasBeenSet; }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline void SetVolumeUsageByDatasourcePackage(const Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage = value; }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline void SetVolumeUsageByDatasourcePackage(Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>&& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage = std::move(value); }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline MemberDetail& WithVolumeUsageByDatasourcePackage(const Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>& value) { SetVolumeUsageByDatasourcePackage(value); return *this;}

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline MemberDetail& WithVolumeUsageByDatasourcePackage(Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>&& value) { SetVolumeUsageByDatasourcePackage(std::move(value)); return *this;}

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline MemberDetail& AddVolumeUsageByDatasourcePackage(const DatasourcePackage& key, const DatasourcePackageUsageInfo& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage.emplace(key, value); return *this; }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline MemberDetail& AddVolumeUsageByDatasourcePackage(DatasourcePackage&& key, const DatasourcePackageUsageInfo& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline MemberDetail& AddVolumeUsageByDatasourcePackage(const DatasourcePackage& key, DatasourcePackageUsageInfo&& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline MemberDetail& AddVolumeUsageByDatasourcePackage(DatasourcePackage&& key, DatasourcePackageUsageInfo&& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, DatasourcePackageIngestState>& GetDatasourcePackageIngestStates() const{ return m_datasourcePackageIngestStates; }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline bool DatasourcePackageIngestStatesHasBeenSet() const { return m_datasourcePackageIngestStatesHasBeenSet; }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline void SetDatasourcePackageIngestStates(const Aws::Map<DatasourcePackage, DatasourcePackageIngestState>& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates = value; }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline void SetDatasourcePackageIngestStates(Aws::Map<DatasourcePackage, DatasourcePackageIngestState>&& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates = std::move(value); }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline MemberDetail& WithDatasourcePackageIngestStates(const Aws::Map<DatasourcePackage, DatasourcePackageIngestState>& value) { SetDatasourcePackageIngestStates(value); return *this;}

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline MemberDetail& WithDatasourcePackageIngestStates(Aws::Map<DatasourcePackage, DatasourcePackageIngestState>&& value) { SetDatasourcePackageIngestStates(std::move(value)); return *this;}

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline MemberDetail& AddDatasourcePackageIngestStates(const DatasourcePackage& key, const DatasourcePackageIngestState& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates.emplace(key, value); return *this; }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline MemberDetail& AddDatasourcePackageIngestStates(DatasourcePackage&& key, const DatasourcePackageIngestState& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates.emplace(std::move(key), value); return *this; }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline MemberDetail& AddDatasourcePackageIngestStates(const DatasourcePackage& key, DatasourcePackageIngestState&& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline MemberDetail& AddDatasourcePackageIngestStates(DatasourcePackage&& key, DatasourcePackageIngestState&& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;

    MemberStatus m_status;
    bool m_statusHasBeenSet = false;

    MemberDisabledReason m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;

    Aws::Utils::DateTime m_invitedTime;
    bool m_invitedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;

    InvitationType m_invitationType;
    bool m_invitationTypeHasBeenSet = false;

    Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo> m_volumeUsageByDatasourcePackage;
    bool m_volumeUsageByDatasourcePackageHasBeenSet = false;

    Aws::Map<DatasourcePackage, DatasourcePackageIngestState> m_datasourcePackageIngestStates;
    bool m_datasourcePackageIngestStatesHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

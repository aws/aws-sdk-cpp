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
   * <p>Details about a member account that was invited to contribute to a behavior
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/MemberDetail">AWS
   * API Reference</a></p>
   */
  class AWS_DETECTIVE_API MemberDetail
  {
  public:
    MemberDetail();
    MemberDetail(Aws::Utils::Json::JsonView jsonValue);
    MemberDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline MemberDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline MemberDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account identifier for the member account.</p>
     */
    inline MemberDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline MemberDetail& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline MemberDetail& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The AWS account root user email address for the member account.</p>
     */
    inline MemberDetail& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline MemberDetail& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline MemberDetail& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph that the member account was invited to.</p>
     */
    inline MemberDetail& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline const Aws::String& GetMasterId() const{ return m_masterId; }

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline void SetMasterId(const Aws::String& value) { m_masterIdHasBeenSet = true; m_masterId = value; }

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline void SetMasterId(Aws::String&& value) { m_masterIdHasBeenSet = true; m_masterId = std::move(value); }

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline void SetMasterId(const char* value) { m_masterIdHasBeenSet = true; m_masterId.assign(value); }

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline MemberDetail& WithMasterId(const Aws::String& value) { SetMasterId(value); return *this;}

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline MemberDetail& WithMasterId(Aws::String&& value) { SetMasterId(std::move(value)); return *this;}

    /**
     * <p>The AWS account identifier of the master account for the behavior graph.</p>
     */
    inline MemberDetail& WithMasterId(const char* value) { SetMasterId(value); return *this;}


    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - Indicates that
     * the member was sent an invitation but has not yet responded.</p> </li> <li> <p>
     * <code>VERIFICATION_IN_PROGRESS</code> - Indicates that Detective is verifying
     * that the account identifier and email address provided for the member account
     * match. If they do match, then Detective sends the invitation. If the email
     * address and account identifier don't match, then the member cannot be added to
     * the behavior graph.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> -
     * Indicates that the account and email address provided for the member account do
     * not match, and Detective did not send an invitation to the account.</p> </li>
     * <li> <p> <code>ENABLED</code> - Indicates that the member account accepted the
     * invitation to contribute to the behavior graph.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - Indicates that the member account accepted
     * the invitation but is prevented from contributing data to the behavior graph.
     * <code>DisabledReason</code> provides the reason why the member account is not
     * enabled.</p> </li> </ul> <p>Member accounts that declined an invitation or that
     * were removed from the behavior graph are not included.</p>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - Indicates that
     * the member was sent an invitation but has not yet responded.</p> </li> <li> <p>
     * <code>VERIFICATION_IN_PROGRESS</code> - Indicates that Detective is verifying
     * that the account identifier and email address provided for the member account
     * match. If they do match, then Detective sends the invitation. If the email
     * address and account identifier don't match, then the member cannot be added to
     * the behavior graph.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> -
     * Indicates that the account and email address provided for the member account do
     * not match, and Detective did not send an invitation to the account.</p> </li>
     * <li> <p> <code>ENABLED</code> - Indicates that the member account accepted the
     * invitation to contribute to the behavior graph.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - Indicates that the member account accepted
     * the invitation but is prevented from contributing data to the behavior graph.
     * <code>DisabledReason</code> provides the reason why the member account is not
     * enabled.</p> </li> </ul> <p>Member accounts that declined an invitation or that
     * were removed from the behavior graph are not included.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - Indicates that
     * the member was sent an invitation but has not yet responded.</p> </li> <li> <p>
     * <code>VERIFICATION_IN_PROGRESS</code> - Indicates that Detective is verifying
     * that the account identifier and email address provided for the member account
     * match. If they do match, then Detective sends the invitation. If the email
     * address and account identifier don't match, then the member cannot be added to
     * the behavior graph.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> -
     * Indicates that the account and email address provided for the member account do
     * not match, and Detective did not send an invitation to the account.</p> </li>
     * <li> <p> <code>ENABLED</code> - Indicates that the member account accepted the
     * invitation to contribute to the behavior graph.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - Indicates that the member account accepted
     * the invitation but is prevented from contributing data to the behavior graph.
     * <code>DisabledReason</code> provides the reason why the member account is not
     * enabled.</p> </li> </ul> <p>Member accounts that declined an invitation or that
     * were removed from the behavior graph are not included.</p>
     */
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - Indicates that
     * the member was sent an invitation but has not yet responded.</p> </li> <li> <p>
     * <code>VERIFICATION_IN_PROGRESS</code> - Indicates that Detective is verifying
     * that the account identifier and email address provided for the member account
     * match. If they do match, then Detective sends the invitation. If the email
     * address and account identifier don't match, then the member cannot be added to
     * the behavior graph.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> -
     * Indicates that the account and email address provided for the member account do
     * not match, and Detective did not send an invitation to the account.</p> </li>
     * <li> <p> <code>ENABLED</code> - Indicates that the member account accepted the
     * invitation to contribute to the behavior graph.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - Indicates that the member account accepted
     * the invitation but is prevented from contributing data to the behavior graph.
     * <code>DisabledReason</code> provides the reason why the member account is not
     * enabled.</p> </li> </ul> <p>Member accounts that declined an invitation or that
     * were removed from the behavior graph are not included.</p>
     */
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - Indicates that
     * the member was sent an invitation but has not yet responded.</p> </li> <li> <p>
     * <code>VERIFICATION_IN_PROGRESS</code> - Indicates that Detective is verifying
     * that the account identifier and email address provided for the member account
     * match. If they do match, then Detective sends the invitation. If the email
     * address and account identifier don't match, then the member cannot be added to
     * the behavior graph.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> -
     * Indicates that the account and email address provided for the member account do
     * not match, and Detective did not send an invitation to the account.</p> </li>
     * <li> <p> <code>ENABLED</code> - Indicates that the member account accepted the
     * invitation to contribute to the behavior graph.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - Indicates that the member account accepted
     * the invitation but is prevented from contributing data to the behavior graph.
     * <code>DisabledReason</code> provides the reason why the member account is not
     * enabled.</p> </li> </ul> <p>Member accounts that declined an invitation or that
     * were removed from the behavior graph are not included.</p>
     */
    inline MemberDetail& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current membership status of the member account. The status can have one
     * of the following values:</p> <ul> <li> <p> <code>INVITED</code> - Indicates that
     * the member was sent an invitation but has not yet responded.</p> </li> <li> <p>
     * <code>VERIFICATION_IN_PROGRESS</code> - Indicates that Detective is verifying
     * that the account identifier and email address provided for the member account
     * match. If they do match, then Detective sends the invitation. If the email
     * address and account identifier don't match, then the member cannot be added to
     * the behavior graph.</p> </li> <li> <p> <code>VERIFICATION_FAILED</code> -
     * Indicates that the account and email address provided for the member account do
     * not match, and Detective did not send an invitation to the account.</p> </li>
     * <li> <p> <code>ENABLED</code> - Indicates that the member account accepted the
     * invitation to contribute to the behavior graph.</p> </li> <li> <p>
     * <code>ACCEPTED_BUT_DISABLED</code> - Indicates that the member account accepted
     * the invitation but is prevented from contributing data to the behavior graph.
     * <code>DisabledReason</code> provides the reason why the member account is not
     * enabled.</p> </li> </ul> <p>Member accounts that declined an invitation or that
     * were removed from the behavior graph are not included.</p>
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
     * <p>The date and time that Detective sent the invitation to the member account.
     * The value is in milliseconds since the epoch.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedTime() const{ return m_invitedTime; }

    /**
     * <p>The date and time that Detective sent the invitation to the member account.
     * The value is in milliseconds since the epoch.</p>
     */
    inline bool InvitedTimeHasBeenSet() const { return m_invitedTimeHasBeenSet; }

    /**
     * <p>The date and time that Detective sent the invitation to the member account.
     * The value is in milliseconds since the epoch.</p>
     */
    inline void SetInvitedTime(const Aws::Utils::DateTime& value) { m_invitedTimeHasBeenSet = true; m_invitedTime = value; }

    /**
     * <p>The date and time that Detective sent the invitation to the member account.
     * The value is in milliseconds since the epoch.</p>
     */
    inline void SetInvitedTime(Aws::Utils::DateTime&& value) { m_invitedTimeHasBeenSet = true; m_invitedTime = std::move(value); }

    /**
     * <p>The date and time that Detective sent the invitation to the member account.
     * The value is in milliseconds since the epoch.</p>
     */
    inline MemberDetail& WithInvitedTime(const Aws::Utils::DateTime& value) { SetInvitedTime(value); return *this;}

    /**
     * <p>The date and time that Detective sent the invitation to the member account.
     * The value is in milliseconds since the epoch.</p>
     */
    inline MemberDetail& WithInvitedTime(Aws::Utils::DateTime&& value) { SetInvitedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the member account was last updated. The value is in
     * milliseconds since the epoch.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The date and time that the member account was last updated. The value is in
     * milliseconds since the epoch.</p>
     */
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }

    /**
     * <p>The date and time that the member account was last updated. The value is in
     * milliseconds since the epoch.</p>
     */
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The date and time that the member account was last updated. The value is in
     * milliseconds since the epoch.</p>
     */
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }

    /**
     * <p>The date and time that the member account was last updated. The value is in
     * milliseconds since the epoch.</p>
     */
    inline MemberDetail& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that the member account was last updated. The value is in
     * milliseconds since the epoch.</p>
     */
    inline MemberDetail& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The member account data volume as a percentage of the maximum allowed data
     * volume. 0 indicates 0 percent, and 100 indicates 100 percent.</p> <p>Note that
     * this is not the percentage of the behavior graph data volume.</p> <p>For
     * example, the data volume for the behavior graph is 80 GB per day. The maximum
     * data volume is 160 GB per day. If the data volume for the member account is 40
     * GB per day, then <code>PercentOfGraphUtilization</code> is 25. It represents 25%
     * of the maximum allowed data volume. </p>
     */
    inline double GetPercentOfGraphUtilization() const{ return m_percentOfGraphUtilization; }

    /**
     * <p>The member account data volume as a percentage of the maximum allowed data
     * volume. 0 indicates 0 percent, and 100 indicates 100 percent.</p> <p>Note that
     * this is not the percentage of the behavior graph data volume.</p> <p>For
     * example, the data volume for the behavior graph is 80 GB per day. The maximum
     * data volume is 160 GB per day. If the data volume for the member account is 40
     * GB per day, then <code>PercentOfGraphUtilization</code> is 25. It represents 25%
     * of the maximum allowed data volume. </p>
     */
    inline bool PercentOfGraphUtilizationHasBeenSet() const { return m_percentOfGraphUtilizationHasBeenSet; }

    /**
     * <p>The member account data volume as a percentage of the maximum allowed data
     * volume. 0 indicates 0 percent, and 100 indicates 100 percent.</p> <p>Note that
     * this is not the percentage of the behavior graph data volume.</p> <p>For
     * example, the data volume for the behavior graph is 80 GB per day. The maximum
     * data volume is 160 GB per day. If the data volume for the member account is 40
     * GB per day, then <code>PercentOfGraphUtilization</code> is 25. It represents 25%
     * of the maximum allowed data volume. </p>
     */
    inline void SetPercentOfGraphUtilization(double value) { m_percentOfGraphUtilizationHasBeenSet = true; m_percentOfGraphUtilization = value; }

    /**
     * <p>The member account data volume as a percentage of the maximum allowed data
     * volume. 0 indicates 0 percent, and 100 indicates 100 percent.</p> <p>Note that
     * this is not the percentage of the behavior graph data volume.</p> <p>For
     * example, the data volume for the behavior graph is 80 GB per day. The maximum
     * data volume is 160 GB per day. If the data volume for the member account is 40
     * GB per day, then <code>PercentOfGraphUtilization</code> is 25. It represents 25%
     * of the maximum allowed data volume. </p>
     */
    inline MemberDetail& WithPercentOfGraphUtilization(double value) { SetPercentOfGraphUtilization(value); return *this;}


    /**
     * <p>The date and time when the graph utilization percentage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetPercentOfGraphUtilizationUpdatedTime() const{ return m_percentOfGraphUtilizationUpdatedTime; }

    /**
     * <p>The date and time when the graph utilization percentage was last updated.</p>
     */
    inline bool PercentOfGraphUtilizationUpdatedTimeHasBeenSet() const { return m_percentOfGraphUtilizationUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time when the graph utilization percentage was last updated.</p>
     */
    inline void SetPercentOfGraphUtilizationUpdatedTime(const Aws::Utils::DateTime& value) { m_percentOfGraphUtilizationUpdatedTimeHasBeenSet = true; m_percentOfGraphUtilizationUpdatedTime = value; }

    /**
     * <p>The date and time when the graph utilization percentage was last updated.</p>
     */
    inline void SetPercentOfGraphUtilizationUpdatedTime(Aws::Utils::DateTime&& value) { m_percentOfGraphUtilizationUpdatedTimeHasBeenSet = true; m_percentOfGraphUtilizationUpdatedTime = std::move(value); }

    /**
     * <p>The date and time when the graph utilization percentage was last updated.</p>
     */
    inline MemberDetail& WithPercentOfGraphUtilizationUpdatedTime(const Aws::Utils::DateTime& value) { SetPercentOfGraphUtilizationUpdatedTime(value); return *this;}

    /**
     * <p>The date and time when the graph utilization percentage was last updated.</p>
     */
    inline MemberDetail& WithPercentOfGraphUtilizationUpdatedTime(Aws::Utils::DateTime&& value) { SetPercentOfGraphUtilizationUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet;

    Aws::String m_masterId;
    bool m_masterIdHasBeenSet;

    MemberStatus m_status;
    bool m_statusHasBeenSet;

    MemberDisabledReason m_disabledReason;
    bool m_disabledReasonHasBeenSet;

    Aws::Utils::DateTime m_invitedTime;
    bool m_invitedTimeHasBeenSet;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet;

    double m_percentOfGraphUtilization;
    bool m_percentOfGraphUtilizationHasBeenSet;

    Aws::Utils::DateTime m_percentOfGraphUtilizationUpdatedTime;
    bool m_percentOfGraphUtilizationUpdatedTimeHasBeenSet;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

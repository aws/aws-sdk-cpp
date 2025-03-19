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
    AWS_DETECTIVE_API MemberDetail() = default;
    AWS_DETECTIVE_API MemberDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API MemberDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account identifier for the member account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MemberDetail& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account root user email address for the member
     * account.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    MemberDetail& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    MemberDetail& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the administrator account for
     * the behavior graph.</p>
     */
    inline const Aws::String& GetAdministratorId() const { return m_administratorId; }
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }
    template<typename AdministratorIdT = Aws::String>
    void SetAdministratorId(AdministratorIdT&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::forward<AdministratorIdT>(value); }
    template<typename AdministratorIdT = Aws::String>
    MemberDetail& WithAdministratorId(AdministratorIdT&& value) { SetAdministratorId(std::forward<AdministratorIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline MemberStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MemberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MemberDetail& WithStatus(MemberStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
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
    inline MemberDisabledReason GetDisabledReason() const { return m_disabledReason; }
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }
    inline void SetDisabledReason(MemberDisabledReason value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }
    inline MemberDetail& WithDisabledReason(MemberDisabledReason value) { SetDisabledReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For invited accounts, the date and time that Detective sent the invitation to
     * the account. The value is an ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedTime() const { return m_invitedTime; }
    inline bool InvitedTimeHasBeenSet() const { return m_invitedTimeHasBeenSet; }
    template<typename InvitedTimeT = Aws::Utils::DateTime>
    void SetInvitedTime(InvitedTimeT&& value) { m_invitedTimeHasBeenSet = true; m_invitedTime = std::forward<InvitedTimeT>(value); }
    template<typename InvitedTimeT = Aws::Utils::DateTime>
    MemberDetail& WithInvitedTime(InvitedTimeT&& value) { SetInvitedTime(std::forward<InvitedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the member account was last updated. The value is an
     * ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    void SetUpdatedTime(UpdatedTimeT&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::forward<UpdatedTimeT>(value); }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    MemberDetail& WithUpdatedTime(UpdatedTimeT&& value) { SetUpdatedTime(std::forward<UpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of behavior graph membership.</p> <p>For an organization account in
     * the organization behavior graph, the type is <code>ORGANIZATION</code>.</p>
     * <p>For an account that was invited to a behavior graph, the type is
     * <code>INVITATION</code>. </p>
     */
    inline InvitationType GetInvitationType() const { return m_invitationType; }
    inline bool InvitationTypeHasBeenSet() const { return m_invitationTypeHasBeenSet; }
    inline void SetInvitationType(InvitationType value) { m_invitationTypeHasBeenSet = true; m_invitationType = value; }
    inline MemberDetail& WithInvitationType(InvitationType value) { SetInvitationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on the volume of usage for each data source package in a behavior
     * graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>& GetVolumeUsageByDatasourcePackage() const { return m_volumeUsageByDatasourcePackage; }
    inline bool VolumeUsageByDatasourcePackageHasBeenSet() const { return m_volumeUsageByDatasourcePackageHasBeenSet; }
    template<typename VolumeUsageByDatasourcePackageT = Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>>
    void SetVolumeUsageByDatasourcePackage(VolumeUsageByDatasourcePackageT&& value) { m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage = std::forward<VolumeUsageByDatasourcePackageT>(value); }
    template<typename VolumeUsageByDatasourcePackageT = Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo>>
    MemberDetail& WithVolumeUsageByDatasourcePackage(VolumeUsageByDatasourcePackageT&& value) { SetVolumeUsageByDatasourcePackage(std::forward<VolumeUsageByDatasourcePackageT>(value)); return *this;}
    inline MemberDetail& AddVolumeUsageByDatasourcePackage(DatasourcePackage key, DatasourcePackageUsageInfo value) {
      m_volumeUsageByDatasourcePackageHasBeenSet = true; m_volumeUsageByDatasourcePackage.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The state of a data source package for the behavior graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, DatasourcePackageIngestState>& GetDatasourcePackageIngestStates() const { return m_datasourcePackageIngestStates; }
    inline bool DatasourcePackageIngestStatesHasBeenSet() const { return m_datasourcePackageIngestStatesHasBeenSet; }
    template<typename DatasourcePackageIngestStatesT = Aws::Map<DatasourcePackage, DatasourcePackageIngestState>>
    void SetDatasourcePackageIngestStates(DatasourcePackageIngestStatesT&& value) { m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates = std::forward<DatasourcePackageIngestStatesT>(value); }
    template<typename DatasourcePackageIngestStatesT = Aws::Map<DatasourcePackage, DatasourcePackageIngestState>>
    MemberDetail& WithDatasourcePackageIngestStates(DatasourcePackageIngestStatesT&& value) { SetDatasourcePackageIngestStates(std::forward<DatasourcePackageIngestStatesT>(value)); return *this;}
    inline MemberDetail& AddDatasourcePackageIngestStates(DatasourcePackage key, DatasourcePackageIngestState value) {
      m_datasourcePackageIngestStatesHasBeenSet = true; m_datasourcePackageIngestStates.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;

    MemberStatus m_status{MemberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    MemberDisabledReason m_disabledReason{MemberDisabledReason::NOT_SET};
    bool m_disabledReasonHasBeenSet = false;

    Aws::Utils::DateTime m_invitedTime{};
    bool m_invitedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime{};
    bool m_updatedTimeHasBeenSet = false;

    InvitationType m_invitationType{InvitationType::NOT_SET};
    bool m_invitationTypeHasBeenSet = false;

    Aws::Map<DatasourcePackage, DatasourcePackageUsageInfo> m_volumeUsageByDatasourcePackage;
    bool m_volumeUsageByDatasourcePackageHasBeenSet = false;

    Aws::Map<DatasourcePackage, DatasourcePackageIngestState> m_datasourcePackageIngestStates;
    bool m_datasourcePackageIngestStatesHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

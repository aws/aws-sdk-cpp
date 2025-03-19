/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/MembershipStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MLMemberAbilities.h>
#include <aws/cleanrooms/model/MembershipQueryLogStatus.h>
#include <aws/cleanrooms/model/MembershipJobLogStatus.h>
#include <aws/cleanrooms/model/MembershipProtectedQueryResultConfiguration.h>
#include <aws/cleanrooms/model/MembershipProtectedJobResultConfiguration.h>
#include <aws/cleanrooms/model/MembershipPaymentConfiguration.h>
#include <aws/cleanrooms/model/MemberAbility.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The membership object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/Membership">AWS
   * API Reference</a></p>
   */
  class Membership
  {
  public:
    AWS_CLEANROOMS_API Membership() = default;
    AWS_CLEANROOMS_API Membership(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Membership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the membership.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Membership& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the membership.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Membership& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the membership's associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationArn() const { return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    template<typename CollaborationArnT = Aws::String>
    void SetCollaborationArn(CollaborationArnT&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::forward<CollaborationArnT>(value); }
    template<typename CollaborationArnT = Aws::String>
    Membership& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    Membership& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCollaborationCreatorAccountId() const { return m_collaborationCreatorAccountId; }
    inline bool CollaborationCreatorAccountIdHasBeenSet() const { return m_collaborationCreatorAccountIdHasBeenSet; }
    template<typename CollaborationCreatorAccountIdT = Aws::String>
    void SetCollaborationCreatorAccountId(CollaborationCreatorAccountIdT&& value) { m_collaborationCreatorAccountIdHasBeenSet = true; m_collaborationCreatorAccountId = std::forward<CollaborationCreatorAccountIdT>(value); }
    template<typename CollaborationCreatorAccountIdT = Aws::String>
    Membership& WithCollaborationCreatorAccountId(CollaborationCreatorAccountIdT&& value) { SetCollaborationCreatorAccountId(std::forward<CollaborationCreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline const Aws::String& GetCollaborationCreatorDisplayName() const { return m_collaborationCreatorDisplayName; }
    inline bool CollaborationCreatorDisplayNameHasBeenSet() const { return m_collaborationCreatorDisplayNameHasBeenSet; }
    template<typename CollaborationCreatorDisplayNameT = Aws::String>
    void SetCollaborationCreatorDisplayName(CollaborationCreatorDisplayNameT&& value) { m_collaborationCreatorDisplayNameHasBeenSet = true; m_collaborationCreatorDisplayName = std::forward<CollaborationCreatorDisplayNameT>(value); }
    template<typename CollaborationCreatorDisplayNameT = Aws::String>
    Membership& WithCollaborationCreatorDisplayName(CollaborationCreatorDisplayNameT&& value) { SetCollaborationCreatorDisplayName(std::forward<CollaborationCreatorDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the membership's collaboration.</p>
     */
    inline const Aws::String& GetCollaborationName() const { return m_collaborationName; }
    inline bool CollaborationNameHasBeenSet() const { return m_collaborationNameHasBeenSet; }
    template<typename CollaborationNameT = Aws::String>
    void SetCollaborationName(CollaborationNameT&& value) { m_collaborationNameHasBeenSet = true; m_collaborationName = std::forward<CollaborationNameT>(value); }
    template<typename CollaborationNameT = Aws::String>
    Membership& WithCollaborationName(CollaborationNameT&& value) { SetCollaborationName(std::forward<CollaborationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the membership was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Membership& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the membership metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Membership& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the membership.</p>
     */
    inline MembershipStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MembershipStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Membership& WithStatus(MembershipStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetMemberAbilities() const { return m_memberAbilities; }
    inline bool MemberAbilitiesHasBeenSet() const { return m_memberAbilitiesHasBeenSet; }
    template<typename MemberAbilitiesT = Aws::Vector<MemberAbility>>
    void SetMemberAbilities(MemberAbilitiesT&& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities = std::forward<MemberAbilitiesT>(value); }
    template<typename MemberAbilitiesT = Aws::Vector<MemberAbility>>
    Membership& WithMemberAbilities(MemberAbilitiesT&& value) { SetMemberAbilities(std::forward<MemberAbilitiesT>(value)); return *this;}
    inline Membership& AddMemberAbilities(MemberAbility value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ML member abilities that are granted to a collaboration
     * member.</p>
     */
    inline const MLMemberAbilities& GetMlMemberAbilities() const { return m_mlMemberAbilities; }
    inline bool MlMemberAbilitiesHasBeenSet() const { return m_mlMemberAbilitiesHasBeenSet; }
    template<typename MlMemberAbilitiesT = MLMemberAbilities>
    void SetMlMemberAbilities(MlMemberAbilitiesT&& value) { m_mlMemberAbilitiesHasBeenSet = true; m_mlMemberAbilities = std::forward<MlMemberAbilitiesT>(value); }
    template<typename MlMemberAbilitiesT = MLMemberAbilities>
    Membership& WithMlMemberAbilities(MlMemberAbilitiesT&& value) { SetMlMemberAbilities(std::forward<MlMemberAbilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * membership.</p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
     * queries run within this collaboration and those logs can be viewed in Amazon
     * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
     */
    inline MembershipQueryLogStatus GetQueryLogStatus() const { return m_queryLogStatus; }
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }
    inline void SetQueryLogStatus(MembershipQueryLogStatus value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }
    inline Membership& WithQueryLogStatus(MembershipQueryLogStatus value) { SetQueryLogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indicator as to whether job logging has been enabled or disabled for the
     * collaboration. </p> <p>When <code>ENABLED</code>, Clean Rooms logs details about
     * jobs run within this collaboration and those logs can be viewed in Amazon
     * CloudWatch Logs. The default value is <code>DISABLED</code>.</p>
     */
    inline MembershipJobLogStatus GetJobLogStatus() const { return m_jobLogStatus; }
    inline bool JobLogStatusHasBeenSet() const { return m_jobLogStatusHasBeenSet; }
    inline void SetJobLogStatus(MembershipJobLogStatus value) { m_jobLogStatusHasBeenSet = true; m_jobLogStatus = value; }
    inline Membership& WithJobLogStatus(MembershipJobLogStatus value) { SetJobLogStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default protected query result configuration as specified by the member
     * who can receive results.</p>
     */
    inline const MembershipProtectedQueryResultConfiguration& GetDefaultResultConfiguration() const { return m_defaultResultConfiguration; }
    inline bool DefaultResultConfigurationHasBeenSet() const { return m_defaultResultConfigurationHasBeenSet; }
    template<typename DefaultResultConfigurationT = MembershipProtectedQueryResultConfiguration>
    void SetDefaultResultConfiguration(DefaultResultConfigurationT&& value) { m_defaultResultConfigurationHasBeenSet = true; m_defaultResultConfiguration = std::forward<DefaultResultConfigurationT>(value); }
    template<typename DefaultResultConfigurationT = MembershipProtectedQueryResultConfiguration>
    Membership& WithDefaultResultConfiguration(DefaultResultConfigurationT&& value) { SetDefaultResultConfiguration(std::forward<DefaultResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default job result configuration for the membership.</p>
     */
    inline const MembershipProtectedJobResultConfiguration& GetDefaultJobResultConfiguration() const { return m_defaultJobResultConfiguration; }
    inline bool DefaultJobResultConfigurationHasBeenSet() const { return m_defaultJobResultConfigurationHasBeenSet; }
    template<typename DefaultJobResultConfigurationT = MembershipProtectedJobResultConfiguration>
    void SetDefaultJobResultConfiguration(DefaultJobResultConfigurationT&& value) { m_defaultJobResultConfigurationHasBeenSet = true; m_defaultJobResultConfiguration = std::forward<DefaultJobResultConfigurationT>(value); }
    template<typename DefaultJobResultConfigurationT = MembershipProtectedJobResultConfiguration>
    Membership& WithDefaultJobResultConfiguration(DefaultJobResultConfigurationT&& value) { SetDefaultJobResultConfiguration(std::forward<DefaultJobResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment responsibilities accepted by the collaboration member.</p>
     */
    inline const MembershipPaymentConfiguration& GetPaymentConfiguration() const { return m_paymentConfiguration; }
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }
    template<typename PaymentConfigurationT = MembershipPaymentConfiguration>
    void SetPaymentConfiguration(PaymentConfigurationT&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::forward<PaymentConfigurationT>(value); }
    template<typename PaymentConfigurationT = MembershipPaymentConfiguration>
    Membership& WithPaymentConfiguration(PaymentConfigurationT&& value) { SetPaymentConfiguration(std::forward<PaymentConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationCreatorAccountId;
    bool m_collaborationCreatorAccountIdHasBeenSet = false;

    Aws::String m_collaborationCreatorDisplayName;
    bool m_collaborationCreatorDisplayNameHasBeenSet = false;

    Aws::String m_collaborationName;
    bool m_collaborationNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    MembershipStatus m_status{MembershipStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<MemberAbility> m_memberAbilities;
    bool m_memberAbilitiesHasBeenSet = false;

    MLMemberAbilities m_mlMemberAbilities;
    bool m_mlMemberAbilitiesHasBeenSet = false;

    MembershipQueryLogStatus m_queryLogStatus{MembershipQueryLogStatus::NOT_SET};
    bool m_queryLogStatusHasBeenSet = false;

    MembershipJobLogStatus m_jobLogStatus{MembershipJobLogStatus::NOT_SET};
    bool m_jobLogStatusHasBeenSet = false;

    MembershipProtectedQueryResultConfiguration m_defaultResultConfiguration;
    bool m_defaultResultConfigurationHasBeenSet = false;

    MembershipProtectedJobResultConfiguration m_defaultJobResultConfiguration;
    bool m_defaultJobResultConfigurationHasBeenSet = false;

    MembershipPaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

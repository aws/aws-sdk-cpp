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
   * <p>The membership object listed by the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipSummary">AWS
   * API Reference</a></p>
   */
  class MembershipSummary
  {
  public:
    AWS_CLEANROOMS_API MembershipSummary() = default;
    AWS_CLEANROOMS_API MembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the membership's collaboration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MembershipSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    MembershipSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    MembershipSummary& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
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
    MembershipSummary& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services principal that created the
     * collaboration. Currently only supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCollaborationCreatorAccountId() const { return m_collaborationCreatorAccountId; }
    inline bool CollaborationCreatorAccountIdHasBeenSet() const { return m_collaborationCreatorAccountIdHasBeenSet; }
    template<typename CollaborationCreatorAccountIdT = Aws::String>
    void SetCollaborationCreatorAccountId(CollaborationCreatorAccountIdT&& value) { m_collaborationCreatorAccountIdHasBeenSet = true; m_collaborationCreatorAccountId = std::forward<CollaborationCreatorAccountIdT>(value); }
    template<typename CollaborationCreatorAccountIdT = Aws::String>
    MembershipSummary& WithCollaborationCreatorAccountId(CollaborationCreatorAccountIdT&& value) { SetCollaborationCreatorAccountId(std::forward<CollaborationCreatorAccountIdT>(value)); return *this;}
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
    MembershipSummary& WithCollaborationCreatorDisplayName(CollaborationCreatorDisplayNameT&& value) { SetCollaborationCreatorDisplayName(std::forward<CollaborationCreatorDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the membership's collaboration.</p>
     */
    inline const Aws::String& GetCollaborationName() const { return m_collaborationName; }
    inline bool CollaborationNameHasBeenSet() const { return m_collaborationNameHasBeenSet; }
    template<typename CollaborationNameT = Aws::String>
    void SetCollaborationName(CollaborationNameT&& value) { m_collaborationNameHasBeenSet = true; m_collaborationName = std::forward<CollaborationNameT>(value); }
    template<typename CollaborationNameT = Aws::String>
    MembershipSummary& WithCollaborationName(CollaborationNameT&& value) { SetCollaborationName(std::forward<CollaborationNameT>(value)); return *this;}
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
    MembershipSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
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
    MembershipSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the membership.</p>
     */
    inline MembershipStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MembershipStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MembershipSummary& WithStatus(MembershipStatus value) { SetStatus(value); return *this;}
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
    MembershipSummary& WithMemberAbilities(MemberAbilitiesT&& value) { SetMemberAbilities(std::forward<MemberAbilitiesT>(value)); return *this;}
    inline MembershipSummary& AddMemberAbilities(MemberAbility value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a summary of the ML abilities for the collaboration member.</p>
     */
    inline const MLMemberAbilities& GetMlMemberAbilities() const { return m_mlMemberAbilities; }
    inline bool MlMemberAbilitiesHasBeenSet() const { return m_mlMemberAbilitiesHasBeenSet; }
    template<typename MlMemberAbilitiesT = MLMemberAbilities>
    void SetMlMemberAbilities(MlMemberAbilitiesT&& value) { m_mlMemberAbilitiesHasBeenSet = true; m_mlMemberAbilities = std::forward<MlMemberAbilitiesT>(value); }
    template<typename MlMemberAbilitiesT = MLMemberAbilities>
    MembershipSummary& WithMlMemberAbilities(MlMemberAbilitiesT&& value) { SetMlMemberAbilities(std::forward<MlMemberAbilitiesT>(value)); return *this;}
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
    MembershipSummary& WithPaymentConfiguration(PaymentConfigurationT&& value) { SetPaymentConfiguration(std::forward<PaymentConfigurationT>(value)); return *this;}
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

    MembershipPaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MemberStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MLMemberAbilities.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/PaymentConfiguration.h>
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
   * <p>The member object listed by the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MemberSummary">AWS
   * API Reference</a></p>
   */
  class MemberSummary
  {
  public:
    AWS_CLEANROOMS_API MemberSummary() = default;
    AWS_CLEANROOMS_API MemberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MemberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MemberSummary& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the member. </p>
     */
    inline MemberStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MemberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MemberSummary& WithStatus(MemberStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's display name.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    MemberSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetAbilities() const { return m_abilities; }
    inline bool AbilitiesHasBeenSet() const { return m_abilitiesHasBeenSet; }
    template<typename AbilitiesT = Aws::Vector<MemberAbility>>
    void SetAbilities(AbilitiesT&& value) { m_abilitiesHasBeenSet = true; m_abilities = std::forward<AbilitiesT>(value); }
    template<typename AbilitiesT = Aws::Vector<MemberAbility>>
    MemberSummary& WithAbilities(AbilitiesT&& value) { SetAbilities(std::forward<AbilitiesT>(value)); return *this;}
    inline MemberSummary& AddAbilities(MemberAbility value) { m_abilitiesHasBeenSet = true; m_abilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a summary of the ML abilities for the collaboration member.</p>
     */
    inline const MLMemberAbilities& GetMlAbilities() const { return m_mlAbilities; }
    inline bool MlAbilitiesHasBeenSet() const { return m_mlAbilitiesHasBeenSet; }
    template<typename MlAbilitiesT = MLMemberAbilities>
    void SetMlAbilities(MlAbilitiesT&& value) { m_mlAbilitiesHasBeenSet = true; m_mlAbilities = std::forward<MlAbilitiesT>(value); }
    template<typename MlAbilitiesT = MLMemberAbilities>
    MemberSummary& WithMlAbilities(MlAbilitiesT&& value) { SetMlAbilities(std::forward<MlAbilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    MemberSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    MemberSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    MemberSummary& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    MemberSummary& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline const PaymentConfiguration& GetPaymentConfiguration() const { return m_paymentConfiguration; }
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }
    template<typename PaymentConfigurationT = PaymentConfiguration>
    void SetPaymentConfiguration(PaymentConfigurationT&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::forward<PaymentConfigurationT>(value); }
    template<typename PaymentConfigurationT = PaymentConfiguration>
    MemberSummary& WithPaymentConfiguration(PaymentConfigurationT&& value) { SetPaymentConfiguration(std::forward<PaymentConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    MemberStatus m_status{MemberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<MemberAbility> m_abilities;
    bool m_abilitiesHasBeenSet = false;

    MLMemberAbilities m_mlAbilities;
    bool m_mlAbilitiesHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    PaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

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
    AWS_CLEANROOMS_API MemberSummary();
    AWS_CLEANROOMS_API MemberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MemberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline MemberSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline MemberSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline MemberSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the member. </p>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MemberSummary& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}
    inline MemberSummary& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's display name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline MemberSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline MemberSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline MemberSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetAbilities() const{ return m_abilities; }
    inline bool AbilitiesHasBeenSet() const { return m_abilitiesHasBeenSet; }
    inline void SetAbilities(const Aws::Vector<MemberAbility>& value) { m_abilitiesHasBeenSet = true; m_abilities = value; }
    inline void SetAbilities(Aws::Vector<MemberAbility>&& value) { m_abilitiesHasBeenSet = true; m_abilities = std::move(value); }
    inline MemberSummary& WithAbilities(const Aws::Vector<MemberAbility>& value) { SetAbilities(value); return *this;}
    inline MemberSummary& WithAbilities(Aws::Vector<MemberAbility>&& value) { SetAbilities(std::move(value)); return *this;}
    inline MemberSummary& AddAbilities(const MemberAbility& value) { m_abilitiesHasBeenSet = true; m_abilities.push_back(value); return *this; }
    inline MemberSummary& AddAbilities(MemberAbility&& value) { m_abilitiesHasBeenSet = true; m_abilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a summary of the ML abilities for the collaboration member.</p>
     * <p>Custom ML modeling is in beta release and is subject to change. For beta
     * terms and conditions, see <i>Betas and Previews</i> in the <a
     * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a>.</p>
     */
    inline const MLMemberAbilities& GetMlAbilities() const{ return m_mlAbilities; }
    inline bool MlAbilitiesHasBeenSet() const { return m_mlAbilitiesHasBeenSet; }
    inline void SetMlAbilities(const MLMemberAbilities& value) { m_mlAbilitiesHasBeenSet = true; m_mlAbilities = value; }
    inline void SetMlAbilities(MLMemberAbilities&& value) { m_mlAbilitiesHasBeenSet = true; m_mlAbilities = std::move(value); }
    inline MemberSummary& WithMlAbilities(const MLMemberAbilities& value) { SetMlAbilities(value); return *this;}
    inline MemberSummary& WithMlAbilities(MLMemberAbilities&& value) { SetMlAbilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline MemberSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline MemberSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline MemberSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline MemberSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline MemberSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline MemberSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline MemberSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline MemberSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline MemberSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline MemberSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline const PaymentConfiguration& GetPaymentConfiguration() const{ return m_paymentConfiguration; }
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }
    inline void SetPaymentConfiguration(const PaymentConfiguration& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = value; }
    inline void SetPaymentConfiguration(PaymentConfiguration&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::move(value); }
    inline MemberSummary& WithPaymentConfiguration(const PaymentConfiguration& value) { SetPaymentConfiguration(value); return *this;}
    inline MemberSummary& WithPaymentConfiguration(PaymentConfiguration&& value) { SetPaymentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    MemberStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<MemberAbility> m_abilities;
    bool m_abilitiesHasBeenSet = false;

    MLMemberAbilities m_mlAbilities;
    bool m_mlAbilitiesHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
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

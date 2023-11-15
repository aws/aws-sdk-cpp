/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MemberStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline MemberSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline MemberSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline MemberSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The status of the member. </p>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the member. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the member. </p>
     */
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the member. </p>
     */
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the member. </p>
     */
    inline MemberSummary& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the member. </p>
     */
    inline MemberSummary& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The member's display name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The member's display name.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The member's display name.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The member's display name.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The member's display name.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The member's display name.</p>
     */
    inline MemberSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The member's display name.</p>
     */
    inline MemberSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The member's display name.</p>
     */
    inline MemberSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetAbilities() const{ return m_abilities; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline bool AbilitiesHasBeenSet() const { return m_abilitiesHasBeenSet; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline void SetAbilities(const Aws::Vector<MemberAbility>& value) { m_abilitiesHasBeenSet = true; m_abilities = value; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline void SetAbilities(Aws::Vector<MemberAbility>&& value) { m_abilitiesHasBeenSet = true; m_abilities = std::move(value); }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MemberSummary& WithAbilities(const Aws::Vector<MemberAbility>& value) { SetAbilities(value); return *this;}

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MemberSummary& WithAbilities(Aws::Vector<MemberAbility>&& value) { SetAbilities(std::move(value)); return *this;}

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MemberSummary& AddAbilities(const MemberAbility& value) { m_abilitiesHasBeenSet = true; m_abilities.push_back(value); return *this; }

    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline MemberSummary& AddAbilities(MemberAbility&& value) { m_abilitiesHasBeenSet = true; m_abilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the member was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time when the member was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time when the member was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time when the member was created.</p>
     */
    inline MemberSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the member was created.</p>
     */
    inline MemberSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline MemberSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the member metadata was last updated.</p>
     */
    inline MemberSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline MemberSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline MemberSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the member's associated membership, if present.</p>
     */
    inline MemberSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline MemberSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline MemberSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the member's associated membership, if present.</p>
     */
    inline MemberSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}


    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline const PaymentConfiguration& GetPaymentConfiguration() const{ return m_paymentConfiguration; }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline void SetPaymentConfiguration(const PaymentConfiguration& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = value; }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline void SetPaymentConfiguration(PaymentConfiguration&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::move(value); }

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline MemberSummary& WithPaymentConfiguration(const PaymentConfiguration& value) { SetPaymentConfiguration(value); return *this;}

    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p>
     */
    inline MemberSummary& WithPaymentConfiguration(PaymentConfiguration&& value) { SetPaymentConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    MemberStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<MemberAbility> m_abilities;
    bool m_abilitiesHasBeenSet = false;

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

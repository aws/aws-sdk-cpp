/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MLMemberAbilities.h>
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
   * <p>Basic metadata used to construct a new member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MemberSpecification">AWS
   * API Reference</a></p>
   */
  class MemberSpecification
  {
  public:
    AWS_CLEANROOMS_API MemberSpecification() = default;
    AWS_CLEANROOMS_API MemberSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MemberSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    MemberSpecification& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
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
    MemberSpecification& WithMemberAbilities(MemberAbilitiesT&& value) { SetMemberAbilities(std::forward<MemberAbilitiesT>(value)); return *this;}
    inline MemberSpecification& AddMemberAbilities(MemberAbility value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ML abilities granted to the collaboration member.</p>
     */
    inline const MLMemberAbilities& GetMlMemberAbilities() const { return m_mlMemberAbilities; }
    inline bool MlMemberAbilitiesHasBeenSet() const { return m_mlMemberAbilitiesHasBeenSet; }
    template<typename MlMemberAbilitiesT = MLMemberAbilities>
    void SetMlMemberAbilities(MlMemberAbilitiesT&& value) { m_mlMemberAbilitiesHasBeenSet = true; m_mlMemberAbilities = std::forward<MlMemberAbilitiesT>(value); }
    template<typename MlMemberAbilitiesT = MLMemberAbilities>
    MemberSpecification& WithMlMemberAbilities(MlMemberAbilitiesT&& value) { SetMlMemberAbilities(std::forward<MlMemberAbilitiesT>(value)); return *this;}
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
    MemberSpecification& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't speciﬁed anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline const PaymentConfiguration& GetPaymentConfiguration() const { return m_paymentConfiguration; }
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }
    template<typename PaymentConfigurationT = PaymentConfiguration>
    void SetPaymentConfiguration(PaymentConfigurationT&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::forward<PaymentConfigurationT>(value); }
    template<typename PaymentConfigurationT = PaymentConfiguration>
    MemberSpecification& WithPaymentConfiguration(PaymentConfigurationT&& value) { SetPaymentConfiguration(std::forward<PaymentConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<MemberAbility> m_memberAbilities;
    bool m_memberAbilitiesHasBeenSet = false;

    MLMemberAbilities m_mlMemberAbilities;
    bool m_mlMemberAbilitiesHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

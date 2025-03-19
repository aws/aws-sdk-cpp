/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/RecoveryOptionType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The settings for user message delivery in forgot-password operations.
   * Contains preference for email or SMS message delivery of password reset codes,
   * or for admin-only password reset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountRecoverySettingType">AWS
   * API Reference</a></p>
   */
  class AccountRecoverySettingType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of options and priorities for user message delivery in
     * forgot-password operations. Sets or displays user pool preferences for email or
     * SMS message priority, whether users should fall back to a second delivery
     * method, and whether passwords should only be reset by administrators.</p>
     */
    inline const Aws::Vector<RecoveryOptionType>& GetRecoveryMechanisms() const { return m_recoveryMechanisms; }
    inline bool RecoveryMechanismsHasBeenSet() const { return m_recoveryMechanismsHasBeenSet; }
    template<typename RecoveryMechanismsT = Aws::Vector<RecoveryOptionType>>
    void SetRecoveryMechanisms(RecoveryMechanismsT&& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms = std::forward<RecoveryMechanismsT>(value); }
    template<typename RecoveryMechanismsT = Aws::Vector<RecoveryOptionType>>
    AccountRecoverySettingType& WithRecoveryMechanisms(RecoveryMechanismsT&& value) { SetRecoveryMechanisms(std::forward<RecoveryMechanismsT>(value)); return *this;}
    template<typename RecoveryMechanismsT = RecoveryOptionType>
    AccountRecoverySettingType& AddRecoveryMechanisms(RecoveryMechanismsT&& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms.emplace_back(std::forward<RecoveryMechanismsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RecoveryOptionType> m_recoveryMechanisms;
    bool m_recoveryMechanismsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

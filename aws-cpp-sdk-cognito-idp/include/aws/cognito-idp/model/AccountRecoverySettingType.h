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
   * <p>The data type for <code>AccountRecoverySetting</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountRecoverySettingType">AWS
   * API Reference</a></p>
   */
  class AccountRecoverySettingType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType();
    AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountRecoverySettingType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline const Aws::Vector<RecoveryOptionType>& GetRecoveryMechanisms() const{ return m_recoveryMechanisms; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline bool RecoveryMechanismsHasBeenSet() const { return m_recoveryMechanismsHasBeenSet; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline void SetRecoveryMechanisms(const Aws::Vector<RecoveryOptionType>& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms = value; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline void SetRecoveryMechanisms(Aws::Vector<RecoveryOptionType>&& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms = std::move(value); }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& WithRecoveryMechanisms(const Aws::Vector<RecoveryOptionType>& value) { SetRecoveryMechanisms(value); return *this;}

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& WithRecoveryMechanisms(Aws::Vector<RecoveryOptionType>&& value) { SetRecoveryMechanisms(std::move(value)); return *this;}

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& AddRecoveryMechanisms(const RecoveryOptionType& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms.push_back(value); return *this; }

    /**
     * <p>The list of <code>RecoveryOptionTypes</code>.</p>
     */
    inline AccountRecoverySettingType& AddRecoveryMechanisms(RecoveryOptionType&& value) { m_recoveryMechanismsHasBeenSet = true; m_recoveryMechanisms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecoveryOptionType> m_recoveryMechanisms;
    bool m_recoveryMechanismsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

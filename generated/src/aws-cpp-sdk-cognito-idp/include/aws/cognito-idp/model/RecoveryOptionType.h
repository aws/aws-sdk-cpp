/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RecoveryOptionNameType.h>
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
   * <p>A recovery option for a user. The <code>AccountRecoverySettingType</code>
   * data type is an array of this object. Each <code>RecoveryOptionType</code> has a
   * priority property that determines whether it is a primary or secondary
   * option.</p> <p>For example, if <code>verified_email</code> has a priority of
   * <code>1</code> and <code>verified_phone_number</code> has a priority of
   * <code>2</code>, your user pool sends account-recovery messages to a verified
   * email address but falls back to an SMS message if the user has a verified phone
   * number. The <code>admin_only</code> option prevents self-service account
   * recovery.</p> <p>This data type is a request and response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html">CreateUserPool</a>
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateUserPool.html">UpdateUserPool</a>,
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RecoveryOptionType">AWS
   * API Reference</a></p>
   */
  class RecoveryOptionType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType();
    AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Your priority preference for using the specified attribute in account
     * recovery. The highest priority is <code>1</code>.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline RecoveryOptionType& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recovery method that this object sets a recovery option for.</p>
     */
    inline const RecoveryOptionNameType& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const RecoveryOptionNameType& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(RecoveryOptionNameType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline RecoveryOptionType& WithName(const RecoveryOptionNameType& value) { SetName(value); return *this;}
    inline RecoveryOptionType& WithName(RecoveryOptionNameType&& value) { SetName(std::move(value)); return *this;}
    ///@}
  private:

    int m_priority;
    bool m_priorityHasBeenSet = false;

    RecoveryOptionNameType m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

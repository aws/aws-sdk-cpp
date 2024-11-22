/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AuthFactorType.h>
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
   * <p>The policy for allowed types of authentication in a user pool.</p> <p>This
   * data type is a request and response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html">CreateUserPool</a>
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateUserPool.html">UpdateUserPool</a>,
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeUserPool.html">DescribeUserPool</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignInPolicyType">AWS
   * API Reference</a></p>
   */
  class SignInPolicyType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SignInPolicyType();
    AWS_COGNITOIDENTITYPROVIDER_API SignInPolicyType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SignInPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sign-in methods that a user pool supports as the first factor. You can
     * permit users to start authentication with a standard username and password, or
     * with other one-time password and hardware factors.</p>
     */
    inline const Aws::Vector<AuthFactorType>& GetAllowedFirstAuthFactors() const{ return m_allowedFirstAuthFactors; }
    inline bool AllowedFirstAuthFactorsHasBeenSet() const { return m_allowedFirstAuthFactorsHasBeenSet; }
    inline void SetAllowedFirstAuthFactors(const Aws::Vector<AuthFactorType>& value) { m_allowedFirstAuthFactorsHasBeenSet = true; m_allowedFirstAuthFactors = value; }
    inline void SetAllowedFirstAuthFactors(Aws::Vector<AuthFactorType>&& value) { m_allowedFirstAuthFactorsHasBeenSet = true; m_allowedFirstAuthFactors = std::move(value); }
    inline SignInPolicyType& WithAllowedFirstAuthFactors(const Aws::Vector<AuthFactorType>& value) { SetAllowedFirstAuthFactors(value); return *this;}
    inline SignInPolicyType& WithAllowedFirstAuthFactors(Aws::Vector<AuthFactorType>&& value) { SetAllowedFirstAuthFactors(std::move(value)); return *this;}
    inline SignInPolicyType& AddAllowedFirstAuthFactors(const AuthFactorType& value) { m_allowedFirstAuthFactorsHasBeenSet = true; m_allowedFirstAuthFactors.push_back(value); return *this; }
    inline SignInPolicyType& AddAllowedFirstAuthFactors(AuthFactorType&& value) { m_allowedFirstAuthFactorsHasBeenSet = true; m_allowedFirstAuthFactors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AuthFactorType> m_allowedFirstAuthFactors;
    bool m_allowedFirstAuthFactorsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

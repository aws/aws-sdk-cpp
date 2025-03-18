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
   * <p>The policy for allowed types of authentication in a user pool. To activate
   * this setting, your user pool must be in the <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
   * Essentials tier</a> or higher.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignInPolicyType">AWS
   * API Reference</a></p>
   */
  class SignInPolicyType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SignInPolicyType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API SignInPolicyType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SignInPolicyType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sign-in methods that a user pool supports as the first factor. You can
     * permit users to start authentication with a standard username and password, or
     * with other one-time password and hardware factors.</p>
     */
    inline const Aws::Vector<AuthFactorType>& GetAllowedFirstAuthFactors() const { return m_allowedFirstAuthFactors; }
    inline bool AllowedFirstAuthFactorsHasBeenSet() const { return m_allowedFirstAuthFactorsHasBeenSet; }
    template<typename AllowedFirstAuthFactorsT = Aws::Vector<AuthFactorType>>
    void SetAllowedFirstAuthFactors(AllowedFirstAuthFactorsT&& value) { m_allowedFirstAuthFactorsHasBeenSet = true; m_allowedFirstAuthFactors = std::forward<AllowedFirstAuthFactorsT>(value); }
    template<typename AllowedFirstAuthFactorsT = Aws::Vector<AuthFactorType>>
    SignInPolicyType& WithAllowedFirstAuthFactors(AllowedFirstAuthFactorsT&& value) { SetAllowedFirstAuthFactors(std::forward<AllowedFirstAuthFactorsT>(value)); return *this;}
    inline SignInPolicyType& AddAllowedFirstAuthFactors(AuthFactorType value) { m_allowedFirstAuthFactorsHasBeenSet = true; m_allowedFirstAuthFactors.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AuthFactorType> m_allowedFirstAuthFactors;
    bool m_allowedFirstAuthFactorsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

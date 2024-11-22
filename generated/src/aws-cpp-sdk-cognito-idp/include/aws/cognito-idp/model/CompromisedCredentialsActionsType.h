/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CompromisedCredentialsEventActionType.h>
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
   * <p>Settings for user pool actions when Amazon Cognito detects compromised
   * credentials with advanced security features in full-function
   * <code>ENFORCED</code> mode.</p> <p>This data type is a request parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetRiskConfiguration.html">SetRiskConfiguration</a>
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeRiskConfiguration.html">DescribeRiskConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CompromisedCredentialsActionsType">AWS
   * API Reference</a></p>
   */
  class CompromisedCredentialsActionsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsActionsType();
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsActionsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsActionsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that Amazon Cognito takes when it detects compromised
     * credentials.</p>
     */
    inline const CompromisedCredentialsEventActionType& GetEventAction() const{ return m_eventAction; }
    inline bool EventActionHasBeenSet() const { return m_eventActionHasBeenSet; }
    inline void SetEventAction(const CompromisedCredentialsEventActionType& value) { m_eventActionHasBeenSet = true; m_eventAction = value; }
    inline void SetEventAction(CompromisedCredentialsEventActionType&& value) { m_eventActionHasBeenSet = true; m_eventAction = std::move(value); }
    inline CompromisedCredentialsActionsType& WithEventAction(const CompromisedCredentialsEventActionType& value) { SetEventAction(value); return *this;}
    inline CompromisedCredentialsActionsType& WithEventAction(CompromisedCredentialsEventActionType&& value) { SetEventAction(std::move(value)); return *this;}
    ///@}
  private:

    CompromisedCredentialsEventActionType m_eventAction;
    bool m_eventActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

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
   * credentials with threat protection in full-function <code>ENFORCED</code>
   * mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CompromisedCredentialsActionsType">AWS
   * API Reference</a></p>
   */
  class CompromisedCredentialsActionsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsActionsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsActionsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsActionsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that Amazon Cognito takes when it detects compromised
     * credentials.</p>
     */
    inline CompromisedCredentialsEventActionType GetEventAction() const { return m_eventAction; }
    inline bool EventActionHasBeenSet() const { return m_eventActionHasBeenSet; }
    inline void SetEventAction(CompromisedCredentialsEventActionType value) { m_eventActionHasBeenSet = true; m_eventAction = value; }
    inline CompromisedCredentialsActionsType& WithEventAction(CompromisedCredentialsEventActionType value) { SetEventAction(value); return *this;}
    ///@}
  private:

    CompromisedCredentialsEventActionType m_eventAction{CompromisedCredentialsEventActionType::NOT_SET};
    bool m_eventActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

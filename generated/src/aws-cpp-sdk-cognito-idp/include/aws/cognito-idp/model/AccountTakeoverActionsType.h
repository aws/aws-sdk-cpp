/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AccountTakeoverActionType.h>
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
   * <p>A list of account-takeover actions for each level of risk that Amazon Cognito
   * might assess with threat protection features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverActionsType">AWS
   * API Reference</a></p>
   */
  class AccountTakeoverActionsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that you assign to a low-risk assessment by threat protection.</p>
     */
    inline const AccountTakeoverActionType& GetLowAction() const { return m_lowAction; }
    inline bool LowActionHasBeenSet() const { return m_lowActionHasBeenSet; }
    template<typename LowActionT = AccountTakeoverActionType>
    void SetLowAction(LowActionT&& value) { m_lowActionHasBeenSet = true; m_lowAction = std::forward<LowActionT>(value); }
    template<typename LowActionT = AccountTakeoverActionType>
    AccountTakeoverActionsType& WithLowAction(LowActionT&& value) { SetLowAction(std::forward<LowActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that you assign to a medium-risk assessment by threat
     * protection.</p>
     */
    inline const AccountTakeoverActionType& GetMediumAction() const { return m_mediumAction; }
    inline bool MediumActionHasBeenSet() const { return m_mediumActionHasBeenSet; }
    template<typename MediumActionT = AccountTakeoverActionType>
    void SetMediumAction(MediumActionT&& value) { m_mediumActionHasBeenSet = true; m_mediumAction = std::forward<MediumActionT>(value); }
    template<typename MediumActionT = AccountTakeoverActionType>
    AccountTakeoverActionsType& WithMediumAction(MediumActionT&& value) { SetMediumAction(std::forward<MediumActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that you assign to a high-risk assessment by threat
     * protection.</p>
     */
    inline const AccountTakeoverActionType& GetHighAction() const { return m_highAction; }
    inline bool HighActionHasBeenSet() const { return m_highActionHasBeenSet; }
    template<typename HighActionT = AccountTakeoverActionType>
    void SetHighAction(HighActionT&& value) { m_highActionHasBeenSet = true; m_highAction = std::forward<HighActionT>(value); }
    template<typename HighActionT = AccountTakeoverActionType>
    AccountTakeoverActionsType& WithHighAction(HighActionT&& value) { SetHighAction(std::forward<HighActionT>(value)); return *this;}
    ///@}
  private:

    AccountTakeoverActionType m_lowAction;
    bool m_lowActionHasBeenSet = false;

    AccountTakeoverActionType m_mediumAction;
    bool m_mediumActionHasBeenSet = false;

    AccountTakeoverActionType m_highAction;
    bool m_highActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

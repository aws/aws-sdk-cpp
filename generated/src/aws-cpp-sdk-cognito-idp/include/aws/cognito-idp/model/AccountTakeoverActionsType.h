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
   * <p>Account takeover actions type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverActionsType">AWS
   * API Reference</a></p>
   */
  class AccountTakeoverActionsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType();
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Action to take for a low risk.</p>
     */
    inline const AccountTakeoverActionType& GetLowAction() const{ return m_lowAction; }
    inline bool LowActionHasBeenSet() const { return m_lowActionHasBeenSet; }
    inline void SetLowAction(const AccountTakeoverActionType& value) { m_lowActionHasBeenSet = true; m_lowAction = value; }
    inline void SetLowAction(AccountTakeoverActionType&& value) { m_lowActionHasBeenSet = true; m_lowAction = std::move(value); }
    inline AccountTakeoverActionsType& WithLowAction(const AccountTakeoverActionType& value) { SetLowAction(value); return *this;}
    inline AccountTakeoverActionsType& WithLowAction(AccountTakeoverActionType&& value) { SetLowAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline const AccountTakeoverActionType& GetMediumAction() const{ return m_mediumAction; }
    inline bool MediumActionHasBeenSet() const { return m_mediumActionHasBeenSet; }
    inline void SetMediumAction(const AccountTakeoverActionType& value) { m_mediumActionHasBeenSet = true; m_mediumAction = value; }
    inline void SetMediumAction(AccountTakeoverActionType&& value) { m_mediumActionHasBeenSet = true; m_mediumAction = std::move(value); }
    inline AccountTakeoverActionsType& WithMediumAction(const AccountTakeoverActionType& value) { SetMediumAction(value); return *this;}
    inline AccountTakeoverActionsType& WithMediumAction(AccountTakeoverActionType&& value) { SetMediumAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Action to take for a high risk.</p>
     */
    inline const AccountTakeoverActionType& GetHighAction() const{ return m_highAction; }
    inline bool HighActionHasBeenSet() const { return m_highActionHasBeenSet; }
    inline void SetHighAction(const AccountTakeoverActionType& value) { m_highActionHasBeenSet = true; m_highAction = value; }
    inline void SetHighAction(AccountTakeoverActionType&& value) { m_highActionHasBeenSet = true; m_highAction = std::move(value); }
    inline AccountTakeoverActionsType& WithHighAction(const AccountTakeoverActionType& value) { SetHighAction(value); return *this;}
    inline AccountTakeoverActionsType& WithHighAction(AccountTakeoverActionType&& value) { SetHighAction(std::move(value)); return *this;}
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

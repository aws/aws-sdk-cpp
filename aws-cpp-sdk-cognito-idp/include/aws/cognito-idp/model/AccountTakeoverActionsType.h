/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionsType
  {
  public:
    AccountTakeoverActionsType();
    AccountTakeoverActionsType(Aws::Utils::Json::JsonView jsonValue);
    AccountTakeoverActionsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Action to take for a low risk.</p>
     */
    inline const AccountTakeoverActionType& GetLowAction() const{ return m_lowAction; }

    /**
     * <p>Action to take for a low risk.</p>
     */
    inline bool LowActionHasBeenSet() const { return m_lowActionHasBeenSet; }

    /**
     * <p>Action to take for a low risk.</p>
     */
    inline void SetLowAction(const AccountTakeoverActionType& value) { m_lowActionHasBeenSet = true; m_lowAction = value; }

    /**
     * <p>Action to take for a low risk.</p>
     */
    inline void SetLowAction(AccountTakeoverActionType&& value) { m_lowActionHasBeenSet = true; m_lowAction = std::move(value); }

    /**
     * <p>Action to take for a low risk.</p>
     */
    inline AccountTakeoverActionsType& WithLowAction(const AccountTakeoverActionType& value) { SetLowAction(value); return *this;}

    /**
     * <p>Action to take for a low risk.</p>
     */
    inline AccountTakeoverActionsType& WithLowAction(AccountTakeoverActionType&& value) { SetLowAction(std::move(value)); return *this;}


    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline const AccountTakeoverActionType& GetMediumAction() const{ return m_mediumAction; }

    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline bool MediumActionHasBeenSet() const { return m_mediumActionHasBeenSet; }

    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline void SetMediumAction(const AccountTakeoverActionType& value) { m_mediumActionHasBeenSet = true; m_mediumAction = value; }

    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline void SetMediumAction(AccountTakeoverActionType&& value) { m_mediumActionHasBeenSet = true; m_mediumAction = std::move(value); }

    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline AccountTakeoverActionsType& WithMediumAction(const AccountTakeoverActionType& value) { SetMediumAction(value); return *this;}

    /**
     * <p>Action to take for a medium risk.</p>
     */
    inline AccountTakeoverActionsType& WithMediumAction(AccountTakeoverActionType&& value) { SetMediumAction(std::move(value)); return *this;}


    /**
     * <p>Action to take for a high risk.</p>
     */
    inline const AccountTakeoverActionType& GetHighAction() const{ return m_highAction; }

    /**
     * <p>Action to take for a high risk.</p>
     */
    inline bool HighActionHasBeenSet() const { return m_highActionHasBeenSet; }

    /**
     * <p>Action to take for a high risk.</p>
     */
    inline void SetHighAction(const AccountTakeoverActionType& value) { m_highActionHasBeenSet = true; m_highAction = value; }

    /**
     * <p>Action to take for a high risk.</p>
     */
    inline void SetHighAction(AccountTakeoverActionType&& value) { m_highActionHasBeenSet = true; m_highAction = std::move(value); }

    /**
     * <p>Action to take for a high risk.</p>
     */
    inline AccountTakeoverActionsType& WithHighAction(const AccountTakeoverActionType& value) { SetHighAction(value); return *this;}

    /**
     * <p>Action to take for a high risk.</p>
     */
    inline AccountTakeoverActionsType& WithHighAction(AccountTakeoverActionType&& value) { SetHighAction(std::move(value)); return *this;}

  private:

    AccountTakeoverActionType m_lowAction;
    bool m_lowActionHasBeenSet;

    AccountTakeoverActionType m_mediumAction;
    bool m_mediumActionHasBeenSet;

    AccountTakeoverActionType m_highAction;
    bool m_highActionHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

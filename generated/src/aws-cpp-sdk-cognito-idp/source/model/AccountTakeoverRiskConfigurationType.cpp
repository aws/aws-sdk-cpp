/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AccountTakeoverRiskConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AccountTakeoverRiskConfigurationType::AccountTakeoverRiskConfigurationType() : 
    m_notifyConfigurationHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

AccountTakeoverRiskConfigurationType::AccountTakeoverRiskConfigurationType(JsonView jsonValue) : 
    m_notifyConfigurationHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountTakeoverRiskConfigurationType& AccountTakeoverRiskConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotifyConfiguration"))
  {
    m_notifyConfiguration = jsonValue.GetObject("NotifyConfiguration");

    m_notifyConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    m_actions = jsonValue.GetObject("Actions");

    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountTakeoverRiskConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_notifyConfigurationHasBeenSet)
  {
   payload.WithObject("NotifyConfiguration", m_notifyConfiguration.Jsonize());

  }

  if(m_actionsHasBeenSet)
  {
   payload.WithObject("Actions", m_actions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

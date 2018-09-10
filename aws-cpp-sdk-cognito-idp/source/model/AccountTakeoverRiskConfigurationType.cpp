﻿/*
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

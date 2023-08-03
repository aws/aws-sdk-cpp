/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/LogDeliveryConfigurationType.h>
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

LogDeliveryConfigurationType::LogDeliveryConfigurationType() : 
    m_userPoolIdHasBeenSet(false),
    m_logConfigurationsHasBeenSet(false)
{
}

LogDeliveryConfigurationType::LogDeliveryConfigurationType(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_logConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

LogDeliveryConfigurationType& LogDeliveryConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogConfigurations"))
  {
    Aws::Utils::Array<JsonView> logConfigurationsJsonList = jsonValue.GetArray("LogConfigurations");
    for(unsigned logConfigurationsIndex = 0; logConfigurationsIndex < logConfigurationsJsonList.GetLength(); ++logConfigurationsIndex)
    {
      m_logConfigurations.push_back(logConfigurationsJsonList[logConfigurationsIndex].AsObject());
    }
    m_logConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue LogDeliveryConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_logConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logConfigurationsJsonList(m_logConfigurations.size());
   for(unsigned logConfigurationsIndex = 0; logConfigurationsIndex < logConfigurationsJsonList.GetLength(); ++logConfigurationsIndex)
   {
     logConfigurationsJsonList[logConfigurationsIndex].AsObject(m_logConfigurations[logConfigurationsIndex].Jsonize());
   }
   payload.WithArray("LogConfigurations", std::move(logConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

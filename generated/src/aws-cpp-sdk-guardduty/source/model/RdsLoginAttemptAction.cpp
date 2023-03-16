/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RdsLoginAttemptAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

RdsLoginAttemptAction::RdsLoginAttemptAction() : 
    m_remoteIpDetailsHasBeenSet(false),
    m_loginAttributesHasBeenSet(false)
{
}

RdsLoginAttemptAction::RdsLoginAttemptAction(JsonView jsonValue) : 
    m_remoteIpDetailsHasBeenSet(false),
    m_loginAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

RdsLoginAttemptAction& RdsLoginAttemptAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("remoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("remoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoginAttributes"))
  {
    Aws::Utils::Array<JsonView> loginAttributesJsonList = jsonValue.GetArray("LoginAttributes");
    for(unsigned loginAttributesIndex = 0; loginAttributesIndex < loginAttributesJsonList.GetLength(); ++loginAttributesIndex)
    {
      m_loginAttributes.push_back(loginAttributesJsonList[loginAttributesIndex].AsObject());
    }
    m_loginAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsLoginAttemptAction::Jsonize() const
{
  JsonValue payload;

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("remoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  if(m_loginAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loginAttributesJsonList(m_loginAttributes.size());
   for(unsigned loginAttributesIndex = 0; loginAttributesIndex < loginAttributesJsonList.GetLength(); ++loginAttributesIndex)
   {
     loginAttributesJsonList[loginAttributesIndex].AsObject(m_loginAttributes[loginAttributesIndex].Jsonize());
   }
   payload.WithArray("LoginAttributes", std::move(loginAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

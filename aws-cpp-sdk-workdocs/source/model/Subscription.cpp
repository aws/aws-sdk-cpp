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

#include <aws/workdocs/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

Subscription::Subscription() : 
    m_subscriptionIdHasBeenSet(false),
    m_endPointHasBeenSet(false),
    m_protocol(SubscriptionProtocolType::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

Subscription::Subscription(const JsonValue& jsonValue) : 
    m_subscriptionIdHasBeenSet(false),
    m_endPointHasBeenSet(false),
    m_protocol(SubscriptionProtocolType::NOT_SET),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SubscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");

    m_subscriptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndPoint"))
  {
    m_endPoint = jsonValue.GetString("EndPoint");

    m_endPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = SubscriptionProtocolTypeMapper::GetSubscriptionProtocolTypeForName(jsonValue.GetString("Protocol"));

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("SubscriptionId", m_subscriptionId);

  }

  if(m_endPointHasBeenSet)
  {
   payload.WithString("EndPoint", m_endPoint);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", SubscriptionProtocolTypeMapper::GetNameForSubscriptionProtocolType(m_protocol));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws

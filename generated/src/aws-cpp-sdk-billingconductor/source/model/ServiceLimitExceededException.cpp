﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ServiceLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

ServiceLimitExceededException::ServiceLimitExceededException(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceLimitExceededException& ServiceLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LimitCode"))
  {
    m_limitCode = jsonValue.GetString("LimitCode");
    m_limitCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");
    m_serviceCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_limitCodeHasBeenSet)
  {
   payload.WithString("LimitCode", m_limitCode);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws

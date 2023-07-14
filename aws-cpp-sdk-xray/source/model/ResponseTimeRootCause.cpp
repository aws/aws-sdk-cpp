﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ResponseTimeRootCause.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ResponseTimeRootCause::ResponseTimeRootCause() : 
    m_servicesHasBeenSet(false),
    m_clientImpacting(false),
    m_clientImpactingHasBeenSet(false)
{
}

ResponseTimeRootCause::ResponseTimeRootCause(JsonView jsonValue) : 
    m_servicesHasBeenSet(false),
    m_clientImpacting(false),
    m_clientImpactingHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseTimeRootCause& ResponseTimeRootCause::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Services"))
  {
    Array<JsonView> servicesJsonList = jsonValue.GetArray("Services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsObject());
    }
    m_servicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientImpacting"))
  {
    m_clientImpacting = jsonValue.GetBool("ClientImpacting");

    m_clientImpactingHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseTimeRootCause::Jsonize() const
{
  JsonValue payload;

  if(m_servicesHasBeenSet)
  {
   Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsObject(m_services[servicesIndex].Jsonize());
   }
   payload.WithArray("Services", std::move(servicesJsonList));

  }

  if(m_clientImpactingHasBeenSet)
  {
   payload.WithBool("ClientImpacting", m_clientImpacting);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws

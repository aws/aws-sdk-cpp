/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/AnomalousService.h>
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

AnomalousService::AnomalousService() : 
    m_serviceIdHasBeenSet(false)
{
}

AnomalousService::AnomalousService(JsonView jsonValue) : 
    m_serviceIdHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalousService& AnomalousService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetObject("ServiceId");

    m_serviceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalousService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceIdHasBeenSet)
  {
   payload.WithObject("ServiceId", m_serviceId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws

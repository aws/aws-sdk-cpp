﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/EmergencyCallingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

EmergencyCallingConfiguration::EmergencyCallingConfiguration() : 
    m_dNISHasBeenSet(false)
{
}

EmergencyCallingConfiguration::EmergencyCallingConfiguration(JsonView jsonValue) : 
    m_dNISHasBeenSet(false)
{
  *this = jsonValue;
}

EmergencyCallingConfiguration& EmergencyCallingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DNIS"))
  {
    Array<JsonView> dNISJsonList = jsonValue.GetArray("DNIS");
    for(unsigned dNISIndex = 0; dNISIndex < dNISJsonList.GetLength(); ++dNISIndex)
    {
      m_dNIS.push_back(dNISJsonList[dNISIndex].AsObject());
    }
    m_dNISHasBeenSet = true;
  }

  return *this;
}

JsonValue EmergencyCallingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dNISHasBeenSet)
  {
   Array<JsonValue> dNISJsonList(m_dNIS.size());
   for(unsigned dNISIndex = 0; dNISIndex < dNISJsonList.GetLength(); ++dNISIndex)
   {
     dNISJsonList[dNISIndex].AsObject(m_dNIS[dNISIndex].Jsonize());
   }
   payload.WithArray("DNIS", std::move(dNISJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws

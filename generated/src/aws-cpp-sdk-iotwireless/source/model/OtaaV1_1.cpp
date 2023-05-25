/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/OtaaV1_1.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

OtaaV1_1::OtaaV1_1() : 
    m_appKeyHasBeenSet(false),
    m_nwkKeyHasBeenSet(false),
    m_joinEuiHasBeenSet(false)
{
}

OtaaV1_1::OtaaV1_1(JsonView jsonValue) : 
    m_appKeyHasBeenSet(false),
    m_nwkKeyHasBeenSet(false),
    m_joinEuiHasBeenSet(false)
{
  *this = jsonValue;
}

OtaaV1_1& OtaaV1_1::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppKey"))
  {
    m_appKey = jsonValue.GetString("AppKey");

    m_appKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NwkKey"))
  {
    m_nwkKey = jsonValue.GetString("NwkKey");

    m_nwkKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinEui"))
  {
    m_joinEui = jsonValue.GetString("JoinEui");

    m_joinEuiHasBeenSet = true;
  }

  return *this;
}

JsonValue OtaaV1_1::Jsonize() const
{
  JsonValue payload;

  if(m_appKeyHasBeenSet)
  {
   payload.WithString("AppKey", m_appKey);

  }

  if(m_nwkKeyHasBeenSet)
  {
   payload.WithString("NwkKey", m_nwkKey);

  }

  if(m_joinEuiHasBeenSet)
  {
   payload.WithString("JoinEui", m_joinEui);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

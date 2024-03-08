/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/OtaaV1_0_x.h>
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

OtaaV1_0_x::OtaaV1_0_x() : 
    m_appKeyHasBeenSet(false),
    m_appEuiHasBeenSet(false),
    m_joinEuiHasBeenSet(false),
    m_genAppKeyHasBeenSet(false)
{
}

OtaaV1_0_x::OtaaV1_0_x(JsonView jsonValue) : 
    m_appKeyHasBeenSet(false),
    m_appEuiHasBeenSet(false),
    m_joinEuiHasBeenSet(false),
    m_genAppKeyHasBeenSet(false)
{
  *this = jsonValue;
}

OtaaV1_0_x& OtaaV1_0_x::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppKey"))
  {
    m_appKey = jsonValue.GetString("AppKey");

    m_appKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppEui"))
  {
    m_appEui = jsonValue.GetString("AppEui");

    m_appEuiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinEui"))
  {
    m_joinEui = jsonValue.GetString("JoinEui");

    m_joinEuiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenAppKey"))
  {
    m_genAppKey = jsonValue.GetString("GenAppKey");

    m_genAppKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue OtaaV1_0_x::Jsonize() const
{
  JsonValue payload;

  if(m_appKeyHasBeenSet)
  {
   payload.WithString("AppKey", m_appKey);

  }

  if(m_appEuiHasBeenSet)
  {
   payload.WithString("AppEui", m_appEui);

  }

  if(m_joinEuiHasBeenSet)
  {
   payload.WithString("JoinEui", m_joinEui);

  }

  if(m_genAppKeyHasBeenSet)
  {
   payload.WithString("GenAppKey", m_genAppKey);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

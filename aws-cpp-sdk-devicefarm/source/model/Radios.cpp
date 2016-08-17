/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/Radios.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Radios::Radios() : 
    m_wifi(false),
    m_wifiHasBeenSet(false),
    m_bluetooth(false),
    m_bluetoothHasBeenSet(false),
    m_nfc(false),
    m_nfcHasBeenSet(false),
    m_gps(false),
    m_gpsHasBeenSet(false)
{
}

Radios::Radios(const JsonValue& jsonValue) : 
    m_wifi(false),
    m_wifiHasBeenSet(false),
    m_bluetooth(false),
    m_bluetoothHasBeenSet(false),
    m_nfc(false),
    m_nfcHasBeenSet(false),
    m_gps(false),
    m_gpsHasBeenSet(false)
{
  *this = jsonValue;
}

Radios& Radios::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("wifi"))
  {
    m_wifi = jsonValue.GetBool("wifi");

    m_wifiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bluetooth"))
  {
    m_bluetooth = jsonValue.GetBool("bluetooth");

    m_bluetoothHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nfc"))
  {
    m_nfc = jsonValue.GetBool("nfc");

    m_nfcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gps"))
  {
    m_gps = jsonValue.GetBool("gps");

    m_gpsHasBeenSet = true;
  }

  return *this;
}

JsonValue Radios::Jsonize() const
{
  JsonValue payload;

  if(m_wifiHasBeenSet)
  {
   payload.WithBool("wifi", m_wifi);

  }

  if(m_bluetoothHasBeenSet)
  {
   payload.WithBool("bluetooth", m_bluetooth);

  }

  if(m_nfcHasBeenSet)
  {
   payload.WithBool("nfc", m_nfc);

  }

  if(m_gpsHasBeenSet)
  {
   payload.WithBool("gps", m_gps);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
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

#include <aws/snowball/model/WirelessConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

WirelessConnection::WirelessConnection() : 
    m_isWifiEnabled(false),
    m_isWifiEnabledHasBeenSet(false)
{
}

WirelessConnection::WirelessConnection(JsonView jsonValue) : 
    m_isWifiEnabled(false),
    m_isWifiEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

WirelessConnection& WirelessConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsWifiEnabled"))
  {
    m_isWifiEnabled = jsonValue.GetBool("IsWifiEnabled");

    m_isWifiEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue WirelessConnection::Jsonize() const
{
  JsonValue payload;

  if(m_isWifiEnabledHasBeenSet)
  {
   payload.WithBool("IsWifiEnabled", m_isWifiEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws

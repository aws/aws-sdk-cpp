/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/NetworkInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

NetworkInterface::NetworkInterface() : 
    m_ipsHasBeenSet(false),
    m_isPrimary(false),
    m_isPrimaryHasBeenSet(false),
    m_macAddressHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_ipsHasBeenSet(false),
    m_isPrimary(false),
    m_isPrimaryHasBeenSet(false),
    m_macAddressHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ips"))
  {
    Aws::Utils::Array<JsonView> ipsJsonList = jsonValue.GetArray("ips");
    for(unsigned ipsIndex = 0; ipsIndex < ipsJsonList.GetLength(); ++ipsIndex)
    {
      m_ips.push_back(ipsJsonList[ipsIndex].AsString());
    }
    m_ipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPrimary"))
  {
    m_isPrimary = jsonValue.GetBool("isPrimary");

    m_isPrimaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("macAddress"))
  {
    m_macAddress = jsonValue.GetString("macAddress");

    m_macAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_ipsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipsJsonList(m_ips.size());
   for(unsigned ipsIndex = 0; ipsIndex < ipsJsonList.GetLength(); ++ipsIndex)
   {
     ipsJsonList[ipsIndex].AsString(m_ips[ipsIndex]);
   }
   payload.WithArray("ips", std::move(ipsJsonList));

  }

  if(m_isPrimaryHasBeenSet)
  {
   payload.WithBool("isPrimary", m_isPrimary);

  }

  if(m_macAddressHasBeenSet)
  {
   payload.WithString("macAddress", m_macAddress);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

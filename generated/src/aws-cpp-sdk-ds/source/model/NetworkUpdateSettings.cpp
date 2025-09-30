/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/NetworkUpdateSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

NetworkUpdateSettings::NetworkUpdateSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkUpdateSettings& NetworkUpdateSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkType"))
  {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("NetworkType"));
    m_networkTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerDnsIpsV6"))
  {
    Aws::Utils::Array<JsonView> customerDnsIpsV6JsonList = jsonValue.GetArray("CustomerDnsIpsV6");
    for(unsigned customerDnsIpsV6Index = 0; customerDnsIpsV6Index < customerDnsIpsV6JsonList.GetLength(); ++customerDnsIpsV6Index)
    {
      m_customerDnsIpsV6.push_back(customerDnsIpsV6JsonList[customerDnsIpsV6Index].AsString());
    }
    m_customerDnsIpsV6HasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkUpdateSettings::Jsonize() const
{
  JsonValue payload;

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  if(m_customerDnsIpsV6HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerDnsIpsV6JsonList(m_customerDnsIpsV6.size());
   for(unsigned customerDnsIpsV6Index = 0; customerDnsIpsV6Index < customerDnsIpsV6JsonList.GetLength(); ++customerDnsIpsV6Index)
   {
     customerDnsIpsV6JsonList[customerDnsIpsV6Index].AsString(m_customerDnsIpsV6[customerDnsIpsV6Index]);
   }
   payload.WithArray("CustomerDnsIpsV6", std::move(customerDnsIpsV6JsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

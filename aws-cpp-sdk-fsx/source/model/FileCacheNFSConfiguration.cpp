/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/FileCacheNFSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

FileCacheNFSConfiguration::FileCacheNFSConfiguration() : 
    m_version(NfsVersion::NOT_SET),
    m_versionHasBeenSet(false),
    m_dnsIpsHasBeenSet(false)
{
}

FileCacheNFSConfiguration::FileCacheNFSConfiguration(JsonView jsonValue) : 
    m_version(NfsVersion::NOT_SET),
    m_versionHasBeenSet(false),
    m_dnsIpsHasBeenSet(false)
{
  *this = jsonValue;
}

FileCacheNFSConfiguration& FileCacheNFSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = NfsVersionMapper::GetNfsVersionForName(jsonValue.GetString("Version"));

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsIps"))
  {
    Aws::Utils::Array<JsonView> dnsIpsJsonList = jsonValue.GetArray("DnsIps");
    for(unsigned dnsIpsIndex = 0; dnsIpsIndex < dnsIpsJsonList.GetLength(); ++dnsIpsIndex)
    {
      m_dnsIps.push_back(dnsIpsJsonList[dnsIpsIndex].AsString());
    }
    m_dnsIpsHasBeenSet = true;
  }

  return *this;
}

JsonValue FileCacheNFSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", NfsVersionMapper::GetNameForNfsVersion(m_version));
  }

  if(m_dnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpsJsonList(m_dnsIps.size());
   for(unsigned dnsIpsIndex = 0; dnsIpsIndex < dnsIpsJsonList.GetLength(); ++dnsIpsIndex)
   {
     dnsIpsJsonList[dnsIpsIndex].AsString(m_dnsIps[dnsIpsIndex]);
   }
   payload.WithArray("DnsIps", std::move(dnsIpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws

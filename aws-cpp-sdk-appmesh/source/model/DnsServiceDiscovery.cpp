/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DnsServiceDiscovery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

DnsServiceDiscovery::DnsServiceDiscovery() : 
    m_hostnameHasBeenSet(false),
    m_ipPreference(IpPreference::NOT_SET),
    m_ipPreferenceHasBeenSet(false),
    m_responseType(DnsResponseType::NOT_SET),
    m_responseTypeHasBeenSet(false)
{
}

DnsServiceDiscovery::DnsServiceDiscovery(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_ipPreference(IpPreference::NOT_SET),
    m_ipPreferenceHasBeenSet(false),
    m_responseType(DnsResponseType::NOT_SET),
    m_responseTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DnsServiceDiscovery& DnsServiceDiscovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipPreference"))
  {
    m_ipPreference = IpPreferenceMapper::GetIpPreferenceForName(jsonValue.GetString("ipPreference"));

    m_ipPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseType"))
  {
    m_responseType = DnsResponseTypeMapper::GetDnsResponseTypeForName(jsonValue.GetString("responseType"));

    m_responseTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsServiceDiscovery::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_ipPreferenceHasBeenSet)
  {
   payload.WithString("ipPreference", IpPreferenceMapper::GetNameForIpPreference(m_ipPreference));
  }

  if(m_responseTypeHasBeenSet)
  {
   payload.WithString("responseType", DnsResponseTypeMapper::GetNameForDnsResponseType(m_responseType));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

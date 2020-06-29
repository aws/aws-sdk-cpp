/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DomainEndpointOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

DomainEndpointOptions::DomainEndpointOptions() : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false)
{
}

DomainEndpointOptions::DomainEndpointOptions(JsonView jsonValue) : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

DomainEndpointOptions& DomainEndpointOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnforceHTTPS"))
  {
    m_enforceHTTPS = jsonValue.GetBool("EnforceHTTPS");

    m_enforceHTTPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSSecurityPolicy"))
  {
    m_tLSSecurityPolicy = TLSSecurityPolicyMapper::GetTLSSecurityPolicyForName(jsonValue.GetString("TLSSecurityPolicy"));

    m_tLSSecurityPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainEndpointOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enforceHTTPSHasBeenSet)
  {
   payload.WithBool("EnforceHTTPS", m_enforceHTTPS);

  }

  if(m_tLSSecurityPolicyHasBeenSet)
  {
   payload.WithString("TLSSecurityPolicy", TLSSecurityPolicyMapper::GetNameForTLSSecurityPolicy(m_tLSSecurityPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

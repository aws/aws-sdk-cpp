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
    m_tLSSecurityPolicyHasBeenSet(false),
    m_customEndpointEnabled(false),
    m_customEndpointEnabledHasBeenSet(false),
    m_customEndpointHasBeenSet(false),
    m_customEndpointCertificateArnHasBeenSet(false)
{
}

DomainEndpointOptions::DomainEndpointOptions(JsonView jsonValue) : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false),
    m_customEndpointEnabled(false),
    m_customEndpointEnabledHasBeenSet(false),
    m_customEndpointHasBeenSet(false),
    m_customEndpointCertificateArnHasBeenSet(false)
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

  if(jsonValue.ValueExists("CustomEndpointEnabled"))
  {
    m_customEndpointEnabled = jsonValue.GetBool("CustomEndpointEnabled");

    m_customEndpointEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEndpoint"))
  {
    m_customEndpoint = jsonValue.GetString("CustomEndpoint");

    m_customEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEndpointCertificateArn"))
  {
    m_customEndpointCertificateArn = jsonValue.GetString("CustomEndpointCertificateArn");

    m_customEndpointCertificateArnHasBeenSet = true;
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

  if(m_customEndpointEnabledHasBeenSet)
  {
   payload.WithBool("CustomEndpointEnabled", m_customEndpointEnabled);

  }

  if(m_customEndpointHasBeenSet)
  {
   payload.WithString("CustomEndpoint", m_customEndpoint);

  }

  if(m_customEndpointCertificateArnHasBeenSet)
  {
   payload.WithString("CustomEndpointCertificateArn", m_customEndpointCertificateArn);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsOpenSearchServiceDomainDomainEndpointOptionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsOpenSearchServiceDomainDomainEndpointOptionsDetails::AwsOpenSearchServiceDomainDomainEndpointOptionsDetails() : 
    m_customEndpointCertificateArnHasBeenSet(false),
    m_customEndpointEnabled(false),
    m_customEndpointEnabledHasBeenSet(false),
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_customEndpointHasBeenSet(false),
    m_tLSSecurityPolicyHasBeenSet(false)
{
}

AwsOpenSearchServiceDomainDomainEndpointOptionsDetails::AwsOpenSearchServiceDomainDomainEndpointOptionsDetails(JsonView jsonValue) : 
    m_customEndpointCertificateArnHasBeenSet(false),
    m_customEndpointEnabled(false),
    m_customEndpointEnabledHasBeenSet(false),
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_customEndpointHasBeenSet(false),
    m_tLSSecurityPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& AwsOpenSearchServiceDomainDomainEndpointOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomEndpointCertificateArn"))
  {
    m_customEndpointCertificateArn = jsonValue.GetString("CustomEndpointCertificateArn");

    m_customEndpointCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEndpointEnabled"))
  {
    m_customEndpointEnabled = jsonValue.GetBool("CustomEndpointEnabled");

    m_customEndpointEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnforceHTTPS"))
  {
    m_enforceHTTPS = jsonValue.GetBool("EnforceHTTPS");

    m_enforceHTTPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEndpoint"))
  {
    m_customEndpoint = jsonValue.GetString("CustomEndpoint");

    m_customEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSSecurityPolicy"))
  {
    m_tLSSecurityPolicy = jsonValue.GetString("TLSSecurityPolicy");

    m_tLSSecurityPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpenSearchServiceDomainDomainEndpointOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_customEndpointCertificateArnHasBeenSet)
  {
   payload.WithString("CustomEndpointCertificateArn", m_customEndpointCertificateArn);

  }

  if(m_customEndpointEnabledHasBeenSet)
  {
   payload.WithBool("CustomEndpointEnabled", m_customEndpointEnabled);

  }

  if(m_enforceHTTPSHasBeenSet)
  {
   payload.WithBool("EnforceHTTPS", m_enforceHTTPS);

  }

  if(m_customEndpointHasBeenSet)
  {
   payload.WithString("CustomEndpoint", m_customEndpoint);

  }

  if(m_tLSSecurityPolicyHasBeenSet)
  {
   payload.WithString("TLSSecurityPolicy", m_tLSSecurityPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

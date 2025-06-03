/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/DomainName.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

DomainName::DomainName(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainName& DomainName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainNameId"))
  {
    m_domainNameId = jsonValue.GetString("domainNameId");
    m_domainNameIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainNameArn"))
  {
    m_domainNameArn = jsonValue.GetString("domainNameArn");
    m_domainNameArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificateName"))
  {
    m_certificateName = jsonValue.GetString("certificateName");
    m_certificateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificateUploadDate"))
  {
    m_certificateUploadDate = jsonValue.GetDouble("certificateUploadDate");
    m_certificateUploadDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionalDomainName"))
  {
    m_regionalDomainName = jsonValue.GetString("regionalDomainName");
    m_regionalDomainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionalHostedZoneId"))
  {
    m_regionalHostedZoneId = jsonValue.GetString("regionalHostedZoneId");
    m_regionalHostedZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionalCertificateName"))
  {
    m_regionalCertificateName = jsonValue.GetString("regionalCertificateName");
    m_regionalCertificateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionalCertificateArn"))
  {
    m_regionalCertificateArn = jsonValue.GetString("regionalCertificateArn");
    m_regionalCertificateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("distributionDomainName"))
  {
    m_distributionDomainName = jsonValue.GetString("distributionDomainName");
    m_distributionDomainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("distributionHostedZoneId"))
  {
    m_distributionHostedZoneId = jsonValue.GetString("distributionHostedZoneId");
    m_distributionHostedZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");
    m_endpointConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainNameStatus"))
  {
    m_domainNameStatus = DomainNameStatusMapper::GetDomainNameStatusForName(jsonValue.GetString("domainNameStatus"));
    m_domainNameStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainNameStatusMessage"))
  {
    m_domainNameStatusMessage = jsonValue.GetString("domainNameStatusMessage");
    m_domainNameStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityPolicy"))
  {
    m_securityPolicy = SecurityPolicyMapper::GetSecurityPolicyForName(jsonValue.GetString("securityPolicy"));
    m_securityPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mutualTlsAuthentication"))
  {
    m_mutualTlsAuthentication = jsonValue.GetObject("mutualTlsAuthentication");
    m_mutualTlsAuthenticationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownershipVerificationCertificateArn"))
  {
    m_ownershipVerificationCertificateArn = jsonValue.GetString("ownershipVerificationCertificateArn");
    m_ownershipVerificationCertificateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managementPolicy"))
  {
    m_managementPolicy = jsonValue.GetString("managementPolicy");
    m_managementPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");
    m_policyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routingMode"))
  {
    m_routingMode = RoutingModeMapper::GetRoutingModeForName(jsonValue.GetString("routingMode"));
    m_routingModeHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainName::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_domainNameIdHasBeenSet)
  {
   payload.WithString("domainNameId", m_domainNameId);

  }

  if(m_domainNameArnHasBeenSet)
  {
   payload.WithString("domainNameArn", m_domainNameArn);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_certificateUploadDateHasBeenSet)
  {
   payload.WithDouble("certificateUploadDate", m_certificateUploadDate.SecondsWithMSPrecision());
  }

  if(m_regionalDomainNameHasBeenSet)
  {
   payload.WithString("regionalDomainName", m_regionalDomainName);

  }

  if(m_regionalHostedZoneIdHasBeenSet)
  {
   payload.WithString("regionalHostedZoneId", m_regionalHostedZoneId);

  }

  if(m_regionalCertificateNameHasBeenSet)
  {
   payload.WithString("regionalCertificateName", m_regionalCertificateName);

  }

  if(m_regionalCertificateArnHasBeenSet)
  {
   payload.WithString("regionalCertificateArn", m_regionalCertificateArn);

  }

  if(m_distributionDomainNameHasBeenSet)
  {
   payload.WithString("distributionDomainName", m_distributionDomainName);

  }

  if(m_distributionHostedZoneIdHasBeenSet)
  {
   payload.WithString("distributionHostedZoneId", m_distributionHostedZoneId);

  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  if(m_domainNameStatusHasBeenSet)
  {
   payload.WithString("domainNameStatus", DomainNameStatusMapper::GetNameForDomainNameStatus(m_domainNameStatus));
  }

  if(m_domainNameStatusMessageHasBeenSet)
  {
   payload.WithString("domainNameStatusMessage", m_domainNameStatusMessage);

  }

  if(m_securityPolicyHasBeenSet)
  {
   payload.WithString("securityPolicy", SecurityPolicyMapper::GetNameForSecurityPolicy(m_securityPolicy));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_mutualTlsAuthenticationHasBeenSet)
  {
   payload.WithObject("mutualTlsAuthentication", m_mutualTlsAuthentication.Jsonize());

  }

  if(m_ownershipVerificationCertificateArnHasBeenSet)
  {
   payload.WithString("ownershipVerificationCertificateArn", m_ownershipVerificationCertificateArn);

  }

  if(m_managementPolicyHasBeenSet)
  {
   payload.WithString("managementPolicy", m_managementPolicy);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_routingModeHasBeenSet)
  {
   payload.WithString("routingMode", RoutingModeMapper::GetNameForRoutingMode(m_routingMode));
  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws

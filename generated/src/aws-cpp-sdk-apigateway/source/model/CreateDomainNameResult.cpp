/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateDomainNameResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDomainNameResult::CreateDomainNameResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDomainNameResult& CreateDomainNameResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

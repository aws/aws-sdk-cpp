/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeDomainConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainConfigurationResult::DescribeDomainConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainConfigurationResult& DescribeDomainConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainConfigurationName"))
  {
    m_domainConfigurationName = jsonValue.GetString("domainConfigurationName");
    m_domainConfigurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainConfigurationArn"))
  {
    m_domainConfigurationArn = jsonValue.GetString("domainConfigurationArn");
    m_domainConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverCertificates"))
  {
    Aws::Utils::Array<JsonView> serverCertificatesJsonList = jsonValue.GetArray("serverCertificates");
    for(unsigned serverCertificatesIndex = 0; serverCertificatesIndex < serverCertificatesJsonList.GetLength(); ++serverCertificatesIndex)
    {
      m_serverCertificates.push_back(serverCertificatesJsonList[serverCertificatesIndex].AsObject());
    }
    m_serverCertificatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerConfig"))
  {
    m_authorizerConfig = jsonValue.GetObject("authorizerConfig");
    m_authorizerConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainConfigurationStatus"))
  {
    m_domainConfigurationStatus = DomainConfigurationStatusMapper::GetDomainConfigurationStatusForName(jsonValue.GetString("domainConfigurationStatus"));
    m_domainConfigurationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceType"))
  {
    m_serviceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("serviceType"));
    m_serviceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainType"))
  {
    m_domainType = DomainTypeMapper::GetDomainTypeForName(jsonValue.GetString("domainType"));
    m_domainTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStatusChangeDate"))
  {
    m_lastStatusChangeDate = jsonValue.GetDouble("lastStatusChangeDate");
    m_lastStatusChangeDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tlsConfig"))
  {
    m_tlsConfig = jsonValue.GetObject("tlsConfig");
    m_tlsConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serverCertificateConfig"))
  {
    m_serverCertificateConfig = jsonValue.GetObject("serverCertificateConfig");
    m_serverCertificateConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationProtocol"))
  {
    m_applicationProtocol = ApplicationProtocolMapper::GetApplicationProtocolForName(jsonValue.GetString("applicationProtocol"));
    m_applicationProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientCertificateConfig"))
  {
    m_clientCertificateConfig = jsonValue.GetObject("clientCertificateConfig");
    m_clientCertificateConfigHasBeenSet = true;
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

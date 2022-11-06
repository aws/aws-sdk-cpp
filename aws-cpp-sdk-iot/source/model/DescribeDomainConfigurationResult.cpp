/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeDomainConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainConfigurationResult::DescribeDomainConfigurationResult() : 
    m_domainConfigurationStatus(DomainConfigurationStatus::NOT_SET),
    m_serviceType(ServiceType::NOT_SET),
    m_domainType(DomainType::NOT_SET)
{
}

DescribeDomainConfigurationResult::DescribeDomainConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domainConfigurationStatus(DomainConfigurationStatus::NOT_SET),
    m_serviceType(ServiceType::NOT_SET),
    m_domainType(DomainType::NOT_SET)
{
  *this = result;
}

DescribeDomainConfigurationResult& DescribeDomainConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainConfigurationName"))
  {
    m_domainConfigurationName = jsonValue.GetString("domainConfigurationName");

  }

  if(jsonValue.ValueExists("domainConfigurationArn"))
  {
    m_domainConfigurationArn = jsonValue.GetString("domainConfigurationArn");

  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

  }

  if(jsonValue.ValueExists("serverCertificates"))
  {
    Aws::Utils::Array<JsonView> serverCertificatesJsonList = jsonValue.GetArray("serverCertificates");
    for(unsigned serverCertificatesIndex = 0; serverCertificatesIndex < serverCertificatesJsonList.GetLength(); ++serverCertificatesIndex)
    {
      m_serverCertificates.push_back(serverCertificatesJsonList[serverCertificatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("authorizerConfig"))
  {
    m_authorizerConfig = jsonValue.GetObject("authorizerConfig");

  }

  if(jsonValue.ValueExists("domainConfigurationStatus"))
  {
    m_domainConfigurationStatus = DomainConfigurationStatusMapper::GetDomainConfigurationStatusForName(jsonValue.GetString("domainConfigurationStatus"));

  }

  if(jsonValue.ValueExists("serviceType"))
  {
    m_serviceType = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("serviceType"));

  }

  if(jsonValue.ValueExists("domainType"))
  {
    m_domainType = DomainTypeMapper::GetDomainTypeForName(jsonValue.GetString("domainType"));

  }

  if(jsonValue.ValueExists("lastStatusChangeDate"))
  {
    m_lastStatusChangeDate = jsonValue.GetDouble("lastStatusChangeDate");

  }



  return *this;
}

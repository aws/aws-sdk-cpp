/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/DescribeDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainResult::DescribeDomainResult() : 
    m_domainStatus(DomainStatus::NOT_SET)
{
}

DescribeDomainResult::DescribeDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domainStatus(DomainStatus::NOT_SET)
{
  *this = result;
}

DescribeDomainResult& DescribeDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("DomainStatus"))
  {
    m_domainStatus = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("DomainStatus"));

  }

  if(jsonValue.ValueExists("AcmCertificateArn"))
  {
    m_acmCertificateArn = jsonValue.GetString("AcmCertificateArn");

  }



  return *this;
}

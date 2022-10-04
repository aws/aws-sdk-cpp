/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDomainResult::CreateDomainResult() : 
    m_domainStatus(DomainStatus::NOT_SET)
{
}

CreateDomainResult::CreateDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domainStatus(DomainStatus::NOT_SET)
{
  *this = result;
}

CreateDomainResult& CreateDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainArn"))
  {
    m_domainArn = jsonValue.GetString("domainArn");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("domainStatus"))
  {
    m_domainStatus = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("domainStatus"));

  }



  return *this;
}

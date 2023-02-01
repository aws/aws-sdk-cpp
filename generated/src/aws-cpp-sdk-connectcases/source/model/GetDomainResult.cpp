/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/GetDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainResult::GetDomainResult() : 
    m_domainStatus(DomainStatus::NOT_SET)
{
}

GetDomainResult::GetDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domainStatus(DomainStatus::NOT_SET)
{
  *this = result;
}

GetDomainResult& GetDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

  }

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

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}

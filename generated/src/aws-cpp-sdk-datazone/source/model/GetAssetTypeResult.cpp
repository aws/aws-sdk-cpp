/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetAssetTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssetTypeResult::GetAssetTypeResult()
{
}

GetAssetTypeResult::GetAssetTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAssetTypeResult& GetAssetTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("formsOutput"))
  {
    Aws::Map<Aws::String, JsonView> formsOutputJsonMap = jsonValue.GetObject("formsOutput").GetAllObjects();
    for(auto& formsOutputItem : formsOutputJsonMap)
    {
      m_formsOutput[formsOutputItem.first] = formsOutputItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("originDomainId"))
  {
    m_originDomainId = jsonValue.GetString("originDomainId");

  }

  if(jsonValue.ValueExists("originProjectId"))
  {
    m_originProjectId = jsonValue.GetString("originProjectId");

  }

  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");

  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

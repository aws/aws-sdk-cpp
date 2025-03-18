/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateDomainUnitResult.h>
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

CreateDomainUnitResult::CreateDomainUnitResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDomainUnitResult& CreateDomainUnitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ancestorDomainUnitIds"))
  {
    Aws::Utils::Array<JsonView> ancestorDomainUnitIdsJsonList = jsonValue.GetArray("ancestorDomainUnitIds");
    for(unsigned ancestorDomainUnitIdsIndex = 0; ancestorDomainUnitIdsIndex < ancestorDomainUnitIdsJsonList.GetLength(); ++ancestorDomainUnitIdsIndex)
    {
      m_ancestorDomainUnitIds.push_back(ancestorDomainUnitIdsJsonList[ancestorDomainUnitIdsIndex].AsString());
    }
    m_ancestorDomainUnitIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owners"))
  {
    Aws::Utils::Array<JsonView> ownersJsonList = jsonValue.GetArray("owners");
    for(unsigned ownersIndex = 0; ownersIndex < ownersJsonList.GetLength(); ++ownersIndex)
    {
      m_owners.push_back(ownersJsonList[ownersIndex].AsObject());
    }
    m_ownersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parentDomainUnitId"))
  {
    m_parentDomainUnitId = jsonValue.GetString("parentDomainUnitId");
    m_parentDomainUnitIdHasBeenSet = true;
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

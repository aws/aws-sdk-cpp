/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateAssetFilterResult.h>
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

CreateAssetFilterResult::CreateAssetFilterResult() : 
    m_status(FilterStatus::NOT_SET)
{
}

CreateAssetFilterResult::CreateAssetFilterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateAssetFilterResult()
{
  *this = result;
}

CreateAssetFilterResult& CreateAssetFilterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("effectiveColumnNames"))
  {
    Aws::Utils::Array<JsonView> effectiveColumnNamesJsonList = jsonValue.GetArray("effectiveColumnNames");
    for(unsigned effectiveColumnNamesIndex = 0; effectiveColumnNamesIndex < effectiveColumnNamesJsonList.GetLength(); ++effectiveColumnNamesIndex)
    {
      m_effectiveColumnNames.push_back(effectiveColumnNamesJsonList[effectiveColumnNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("effectiveRowFilter"))
  {
    m_effectiveRowFilter = jsonValue.GetString("effectiveRowFilter");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FilterStatusMapper::GetFilterStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

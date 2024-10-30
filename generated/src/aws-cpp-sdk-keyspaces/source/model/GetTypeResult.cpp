/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/GetTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTypeResult::GetTypeResult() : 
    m_status(TypeStatus::NOT_SET),
    m_maxNestingDepth(0)
{
}

GetTypeResult::GetTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTypeResult()
{
  *this = result;
}

GetTypeResult& GetTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");

  }

  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");

  }

  if(jsonValue.ValueExists("fieldDefinitions"))
  {
    Aws::Utils::Array<JsonView> fieldDefinitionsJsonList = jsonValue.GetArray("fieldDefinitions");
    for(unsigned fieldDefinitionsIndex = 0; fieldDefinitionsIndex < fieldDefinitionsJsonList.GetLength(); ++fieldDefinitionsIndex)
    {
      m_fieldDefinitions.push_back(fieldDefinitionsJsonList[fieldDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TypeStatusMapper::GetTypeStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("directReferringTables"))
  {
    Aws::Utils::Array<JsonView> directReferringTablesJsonList = jsonValue.GetArray("directReferringTables");
    for(unsigned directReferringTablesIndex = 0; directReferringTablesIndex < directReferringTablesJsonList.GetLength(); ++directReferringTablesIndex)
    {
      m_directReferringTables.push_back(directReferringTablesJsonList[directReferringTablesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("directParentTypes"))
  {
    Aws::Utils::Array<JsonView> directParentTypesJsonList = jsonValue.GetArray("directParentTypes");
    for(unsigned directParentTypesIndex = 0; directParentTypesIndex < directParentTypesJsonList.GetLength(); ++directParentTypesIndex)
    {
      m_directParentTypes.push_back(directParentTypesJsonList[directParentTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("maxNestingDepth"))
  {
    m_maxNestingDepth = jsonValue.GetInteger("maxNestingDepth");

  }

  if(jsonValue.ValueExists("keyspaceArn"))
  {
    m_keyspaceArn = jsonValue.GetString("keyspaceArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

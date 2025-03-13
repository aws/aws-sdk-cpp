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

GetTypeResult::GetTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTypeResult& GetTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");
    m_keyspaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeName"))
  {
    m_typeName = jsonValue.GetString("typeName");
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldDefinitions"))
  {
    Aws::Utils::Array<JsonView> fieldDefinitionsJsonList = jsonValue.GetArray("fieldDefinitions");
    for(unsigned fieldDefinitionsIndex = 0; fieldDefinitionsIndex < fieldDefinitionsJsonList.GetLength(); ++fieldDefinitionsIndex)
    {
      m_fieldDefinitions.push_back(fieldDefinitionsJsonList[fieldDefinitionsIndex].AsObject());
    }
    m_fieldDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");
    m_lastModifiedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TypeStatusMapper::GetTypeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("directReferringTables"))
  {
    Aws::Utils::Array<JsonView> directReferringTablesJsonList = jsonValue.GetArray("directReferringTables");
    for(unsigned directReferringTablesIndex = 0; directReferringTablesIndex < directReferringTablesJsonList.GetLength(); ++directReferringTablesIndex)
    {
      m_directReferringTables.push_back(directReferringTablesJsonList[directReferringTablesIndex].AsString());
    }
    m_directReferringTablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("directParentTypes"))
  {
    Aws::Utils::Array<JsonView> directParentTypesJsonList = jsonValue.GetArray("directParentTypes");
    for(unsigned directParentTypesIndex = 0; directParentTypesIndex < directParentTypesJsonList.GetLength(); ++directParentTypesIndex)
    {
      m_directParentTypes.push_back(directParentTypesJsonList[directParentTypesIndex].AsString());
    }
    m_directParentTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxNestingDepth"))
  {
    m_maxNestingDepth = jsonValue.GetInteger("maxNestingDepth");
    m_maxNestingDepthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyspaceArn"))
  {
    m_keyspaceArn = jsonValue.GetString("keyspaceArn");
    m_keyspaceArnHasBeenSet = true;
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

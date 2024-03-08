/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GetSchemaMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSchemaMappingResult::GetSchemaMappingResult() : 
    m_hasWorkflows(false)
{
}

GetSchemaMappingResult::GetSchemaMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasWorkflows(false)
{
  *this = result;
}

GetSchemaMappingResult& GetSchemaMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("hasWorkflows"))
  {
    m_hasWorkflows = jsonValue.GetBool("hasWorkflows");

  }

  if(jsonValue.ValueExists("mappedInputFields"))
  {
    Aws::Utils::Array<JsonView> mappedInputFieldsJsonList = jsonValue.GetArray("mappedInputFields");
    for(unsigned mappedInputFieldsIndex = 0; mappedInputFieldsIndex < mappedInputFieldsJsonList.GetLength(); ++mappedInputFieldsIndex)
    {
      m_mappedInputFields.push_back(mappedInputFieldsJsonList[mappedInputFieldsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("schemaArn"))
  {
    m_schemaArn = jsonValue.GetString("schemaArn");

  }

  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

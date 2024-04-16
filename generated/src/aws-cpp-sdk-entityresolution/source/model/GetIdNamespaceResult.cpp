/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GetIdNamespaceResult.h>
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

GetIdNamespaceResult::GetIdNamespaceResult() : 
    m_type(IdNamespaceType::NOT_SET)
{
}

GetIdNamespaceResult::GetIdNamespaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(IdNamespaceType::NOT_SET)
{
  *this = result;
}

GetIdNamespaceResult& GetIdNamespaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("idMappingWorkflowProperties"))
  {
    Aws::Utils::Array<JsonView> idMappingWorkflowPropertiesJsonList = jsonValue.GetArray("idMappingWorkflowProperties");
    for(unsigned idMappingWorkflowPropertiesIndex = 0; idMappingWorkflowPropertiesIndex < idMappingWorkflowPropertiesJsonList.GetLength(); ++idMappingWorkflowPropertiesIndex)
    {
      m_idMappingWorkflowProperties.push_back(idMappingWorkflowPropertiesJsonList[idMappingWorkflowPropertiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("idNamespaceArn"))
  {
    m_idNamespaceArn = jsonValue.GetString("idNamespaceArn");

  }

  if(jsonValue.ValueExists("idNamespaceName"))
  {
    m_idNamespaceName = jsonValue.GetString("idNamespaceName");

  }

  if(jsonValue.ValueExists("inputSourceConfig"))
  {
    Aws::Utils::Array<JsonView> inputSourceConfigJsonList = jsonValue.GetArray("inputSourceConfig");
    for(unsigned inputSourceConfigIndex = 0; inputSourceConfigIndex < inputSourceConfigJsonList.GetLength(); ++inputSourceConfigIndex)
    {
      m_inputSourceConfig.push_back(inputSourceConfigJsonList[inputSourceConfigIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("type"));

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

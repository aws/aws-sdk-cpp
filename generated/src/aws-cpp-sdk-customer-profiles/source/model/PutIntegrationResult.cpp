/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutIntegrationResult::PutIntegrationResult() : 
    m_isUnstructured(false)
{
}

PutIntegrationResult::PutIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isUnstructured(false)
{
  *this = result;
}

PutIntegrationResult& PutIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

  }

  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("ObjectTypeNames"))
  {
    Aws::Map<Aws::String, JsonView> objectTypeNamesJsonMap = jsonValue.GetObject("ObjectTypeNames").GetAllObjects();
    for(auto& objectTypeNamesItem : objectTypeNamesJsonMap)
    {
      m_objectTypeNames[objectTypeNamesItem.first] = objectTypeNamesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");

  }

  if(jsonValue.ValueExists("IsUnstructured"))
  {
    m_isUnstructured = jsonValue.GetBool("IsUnstructured");

  }



  return *this;
}

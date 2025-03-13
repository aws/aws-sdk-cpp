/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/CreateDataIntegrationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDataIntegrationResult::CreateDataIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDataIntegrationResult& CreateDataIntegrationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceURI"))
  {
    m_sourceURI = jsonValue.GetString("SourceURI");
    m_sourceURIHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleConfiguration"))
  {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileConfiguration"))
  {
    m_fileConfiguration = jsonValue.GetObject("FileConfiguration");
    m_fileConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> objectConfigurationJsonMap = jsonValue.GetObject("ObjectConfiguration").GetAllObjects();
    for(auto& objectConfigurationItem : objectConfigurationJsonMap)
    {
      Aws::Map<Aws::String, JsonView> fieldsMapJsonMap = objectConfigurationItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> fieldsMapMap;
      for(auto& fieldsMapItem : fieldsMapJsonMap)
      {
        Aws::Utils::Array<JsonView> fieldsListJsonList = fieldsMapItem.second.AsArray();
        Aws::Vector<Aws::String> fieldsListList;
        fieldsListList.reserve((size_t)fieldsListJsonList.GetLength());
        for(unsigned fieldsListIndex = 0; fieldsListIndex < fieldsListJsonList.GetLength(); ++fieldsListIndex)
        {
          fieldsListList.push_back(fieldsListJsonList[fieldsListIndex].AsString());
        }
        fieldsMapMap[fieldsMapItem.first] = std::move(fieldsListList);
      }
      m_objectConfiguration[objectConfigurationItem.first] = std::move(fieldsMapMap);
    }
    m_objectConfigurationHasBeenSet = true;
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

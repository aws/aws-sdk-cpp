/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/CreateDataIntegrationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDataIntegrationResult::CreateDataIntegrationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateDataIntegrationResult& CreateDataIntegrationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKey")) {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceURI")) {
    m_sourceURI = jsonValue.GetString("SourceURI");
    m_sourceURIHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduleConfiguration")) {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientToken")) {
    m_clientToken = jsonValue.GetString("ClientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileConfiguration")) {
    m_fileConfiguration = jsonValue.GetObject("FileConfiguration");
    m_fileConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObjectConfiguration")) {
    Aws::Map<Aws::String, JsonView> objectConfigurationJsonMap = jsonValue.GetObject("ObjectConfiguration").GetAllObjects();
    for (auto& objectConfigurationItem : objectConfigurationJsonMap) {
      Aws::Map<Aws::String, JsonView> fieldsMap2JsonMap = objectConfigurationItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::Vector<Aws::String>> fieldsMap2Map;
      for (auto& fieldsMap2Item : fieldsMap2JsonMap) {
        Aws::Utils::Array<JsonView> fieldsList3JsonList = fieldsMap2Item.second.AsArray();
        Aws::Vector<Aws::String> fieldsList3List;
        fieldsList3List.reserve((size_t)fieldsList3JsonList.GetLength());
        for (unsigned fieldsList3Index = 0; fieldsList3Index < fieldsList3JsonList.GetLength(); ++fieldsList3Index) {
          fieldsList3List.push_back(fieldsList3JsonList[fieldsList3Index].AsString());
        }
        fieldsMap2Map[fieldsMap2Item.first] = std::move(fieldsList3List);
      }
      m_objectConfiguration[objectConfigurationItem.first] = std::move(fieldsMap2Map);
    }
    m_objectConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

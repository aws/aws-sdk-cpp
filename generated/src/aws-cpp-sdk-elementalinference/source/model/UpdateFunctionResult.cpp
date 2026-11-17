/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/UpdateFunctionResult.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFunctionResult::UpdateFunctionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateFunctionResult& UpdateFunctionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetObject("target");
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestExpression")) {
    m_requestExpression = jsonValue.GetString("requestExpression");
    m_requestExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseExpression")) {
    m_responseExpression = jsonValue.GetString("responseExpression");
    m_responseExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventBridgeDelivery")) {
    m_eventBridgeDelivery = EventBridgeDeliveryModeMapper::GetEventBridgeDeliveryModeForName(jsonValue.GetString("eventBridgeDelivery"));
    m_eventBridgeDeliveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FunctionStatusMapper::GetFunctionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("references")) {
    Aws::Utils::Array<JsonView> referencesJsonList = jsonValue.GetArray("references");
    for (unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex) {
      m_references.push_back(referencesJsonList[referencesIndex].AsString());
    }
    m_referencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contextTypes")) {
    Aws::Utils::Array<JsonView> contextTypesJsonList = jsonValue.GetArray("contextTypes");
    for (unsigned contextTypesIndex = 0; contextTypesIndex < contextTypesJsonList.GetLength(); ++contextTypesIndex) {
      m_contextTypes.push_back(ContextTypeMapper::GetContextTypeForName(contextTypesJsonList[contextTypesIndex].AsString()));
    }
    m_contextTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

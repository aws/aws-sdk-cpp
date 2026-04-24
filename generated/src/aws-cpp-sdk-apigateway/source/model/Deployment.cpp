/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {

Deployment::Deployment(JsonView jsonValue) { *this = jsonValue; }

Deployment& Deployment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdDate")) {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiSummary")) {
    Aws::Map<Aws::String, JsonView> apiSummaryJsonMap = jsonValue.GetObject("apiSummary").GetAllObjects();
    for (auto& apiSummaryItem : apiSummaryJsonMap) {
      Aws::Map<Aws::String, JsonView> mapOfMethodSnapshot2JsonMap = apiSummaryItem.second.GetAllObjects();
      Aws::Map<Aws::String, MethodSnapshot> mapOfMethodSnapshot2Map;
      for (auto& mapOfMethodSnapshot2Item : mapOfMethodSnapshot2JsonMap) {
        mapOfMethodSnapshot2Map[mapOfMethodSnapshot2Item.first] = mapOfMethodSnapshot2Item.second.AsObject();
      }
      m_apiSummary[apiSummaryItem.first] = std::move(mapOfMethodSnapshot2Map);
    }
    m_apiSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue Deployment::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if (m_apiSummaryHasBeenSet) {
    JsonValue apiSummaryJsonMap;
    for (auto& apiSummaryItem : m_apiSummary) {
      JsonValue mapOfMethodSnapshotJsonMap;
      for (auto& mapOfMethodSnapshotItem : apiSummaryItem.second) {
        mapOfMethodSnapshotJsonMap.WithObject(mapOfMethodSnapshotItem.first, mapOfMethodSnapshotItem.second.Jsonize());
      }
      apiSummaryJsonMap.WithObject(apiSummaryItem.first, std::move(mapOfMethodSnapshotJsonMap));
    }
    payload.WithObject("apiSummary", std::move(apiSummaryJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws

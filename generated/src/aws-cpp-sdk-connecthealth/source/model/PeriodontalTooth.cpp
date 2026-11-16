/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PeriodontalTooth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

PeriodontalTooth::PeriodontalTooth(JsonView jsonValue) { *this = jsonValue; }

PeriodontalTooth& PeriodontalTooth::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toothNumber")) {
    m_toothNumber = jsonValue.GetInteger("toothNumber");
    m_toothNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("missing")) {
    m_missing = jsonValue.GetBool("missing");
    m_missingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mobility")) {
    m_mobility = jsonValue.GetInteger("mobility");
    m_mobilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("furcation")) {
    m_furcation = jsonValue.GetInteger("furcation");
    m_furcationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sites")) {
    Aws::Utils::Array<JsonView> sitesJsonList = jsonValue.GetArray("sites");
    for (unsigned sitesIndex = 0; sitesIndex < sitesJsonList.GetLength(); ++sitesIndex) {
      m_sites.push_back(sitesJsonList[sitesIndex].AsObject());
    }
    m_sitesHasBeenSet = true;
  }
  return *this;
}

JsonValue PeriodontalTooth::Jsonize() const {
  JsonValue payload;

  if (m_toothNumberHasBeenSet) {
    payload.WithInteger("toothNumber", m_toothNumber);
  }

  if (m_missingHasBeenSet) {
    payload.WithBool("missing", m_missing);
  }

  if (m_mobilityHasBeenSet) {
    payload.WithInteger("mobility", m_mobility);
  }

  if (m_furcationHasBeenSet) {
    payload.WithInteger("furcation", m_furcation);
  }

  if (m_sitesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sitesJsonList(m_sites.size());
    for (unsigned sitesIndex = 0; sitesIndex < sitesJsonList.GetLength(); ++sitesIndex) {
      sitesJsonList[sitesIndex].AsObject(m_sites[sitesIndex].Jsonize());
    }
    payload.WithArray("sites", std::move(sitesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

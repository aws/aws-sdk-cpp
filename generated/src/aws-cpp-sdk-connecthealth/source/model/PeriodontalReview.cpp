/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PeriodontalReview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

PeriodontalReview::PeriodontalReview(JsonView jsonValue) { *this = jsonValue; }

PeriodontalReview& PeriodontalReview::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reason")) {
    m_reason = PeriodontalReviewReasonMapper::GetPeriodontalReviewReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toothNumber")) {
    m_toothNumber = jsonValue.GetInteger("toothNumber");
    m_toothNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sites")) {
    Aws::Utils::Array<JsonView> sitesJsonList = jsonValue.GetArray("sites");
    for (unsigned sitesIndex = 0; sitesIndex < sitesJsonList.GetLength(); ++sitesIndex) {
      m_sites.push_back(PeriodontalSiteNameMapper::GetPeriodontalSiteNameForName(sitesJsonList[sitesIndex].AsString()));
    }
    m_sitesHasBeenSet = true;
  }
  return *this;
}

JsonValue PeriodontalReview::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", PeriodontalReviewReasonMapper::GetNameForPeriodontalReviewReason(m_reason));
  }

  if (m_toothNumberHasBeenSet) {
    payload.WithInteger("toothNumber", m_toothNumber);
  }

  if (m_sitesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sitesJsonList(m_sites.size());
    for (unsigned sitesIndex = 0; sitesIndex < sitesJsonList.GetLength(); ++sitesIndex) {
      sitesJsonList[sitesIndex].AsString(PeriodontalSiteNameMapper::GetNameForPeriodontalSiteName(m_sites[sitesIndex]));
    }
    payload.WithArray("sites", std::move(sitesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

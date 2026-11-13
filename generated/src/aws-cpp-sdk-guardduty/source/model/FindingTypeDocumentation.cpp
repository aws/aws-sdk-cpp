/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/FindingTypeDocumentation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

FindingTypeDocumentation::FindingTypeDocumentation(JsonView jsonValue) { *this = jsonValue; }

FindingTypeDocumentation& FindingTypeDocumentation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = jsonValue.GetString("severity");
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feature")) {
    m_feature = jsonValue.GetString("feature");
    m_featureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fullDescription")) {
    m_fullDescription = jsonValue.GetString("fullDescription");
    m_fullDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediation")) {
    m_remediation = jsonValue.GetString("remediation");
    m_remediationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("learnMoreLinks")) {
    Aws::Utils::Array<JsonView> learnMoreLinksJsonList = jsonValue.GetArray("learnMoreLinks");
    for (unsigned learnMoreLinksIndex = 0; learnMoreLinksIndex < learnMoreLinksJsonList.GetLength(); ++learnMoreLinksIndex) {
      m_learnMoreLinks.push_back(learnMoreLinksJsonList[learnMoreLinksIndex].AsString());
    }
    m_learnMoreLinksHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingTypeDocumentation::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", m_severity);
  }

  if (m_featureHasBeenSet) {
    payload.WithString("feature", m_feature);
  }

  if (m_fullDescriptionHasBeenSet) {
    payload.WithString("fullDescription", m_fullDescription);
  }

  if (m_remediationHasBeenSet) {
    payload.WithString("remediation", m_remediation);
  }

  if (m_learnMoreLinksHasBeenSet) {
    Aws::Utils::Array<JsonValue> learnMoreLinksJsonList(m_learnMoreLinks.size());
    for (unsigned learnMoreLinksIndex = 0; learnMoreLinksIndex < learnMoreLinksJsonList.GetLength(); ++learnMoreLinksIndex) {
      learnMoreLinksJsonList[learnMoreLinksIndex].AsString(m_learnMoreLinks[learnMoreLinksIndex]);
    }
    payload.WithArray("learnMoreLinks", std::move(learnMoreLinksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RecommendationContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RecommendationContent::RecommendationContent(JsonView jsonValue) { *this = jsonValue; }

RecommendationContent& RecommendationContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spec")) {
    m_spec = jsonValue.GetString("spec");
    m_specHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationContent::Jsonize() const {
  JsonValue payload;

  if (m_summaryHasBeenSet) {
    payload.WithString("summary", m_summary);
  }

  if (m_specHasBeenSet) {
    payload.WithString("spec", m_spec);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

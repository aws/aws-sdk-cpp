/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyGenerateFidelityReportContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyGenerateFidelityReportContent::AutomatedReasoningPolicyGenerateFidelityReportContent(JsonView jsonValue) {
  *this = jsonValue;
}

AutomatedReasoningPolicyGenerateFidelityReportContent& AutomatedReasoningPolicyGenerateFidelityReportContent::operator=(
    JsonView jsonValue) {
  if (jsonValue.ValueExists("documents")) {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyGenerateFidelityReportContent::Jsonize() const {
  JsonValue payload;

  if (m_documentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
    }
    payload.WithArray("documents", std::move(documentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyIterativeRefinementContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyIterativeRefinementContent::AutomatedReasoningPolicyIterativeRefinementContent(JsonView jsonValue) {
  *this = jsonValue;
}

AutomatedReasoningPolicyIterativeRefinementContent& AutomatedReasoningPolicyIterativeRefinementContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("documents")) {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feedback")) {
    m_feedback = jsonValue.GetString("feedback");
    m_feedbackHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyIterativeRefinementContent::Jsonize() const {
  JsonValue payload;

  if (m_documentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
    }
    payload.WithArray("documents", std::move(documentsJsonList));
  }

  if (m_feedbackHasBeenSet) {
    payload.WithString("feedback", m_feedback);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyReportSourceDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyReportSourceDocument::AutomatedReasoningPolicyReportSourceDocument(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyReportSourceDocument& AutomatedReasoningPolicyReportSourceDocument::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("documentName")) {
    m_documentName = jsonValue.GetString("documentName");
    m_documentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentHash")) {
    m_documentHash = jsonValue.GetString("documentHash");
    m_documentHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentId")) {
    m_documentId = jsonValue.GetString("documentId");
    m_documentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("atomicStatements")) {
    Aws::Utils::Array<JsonView> atomicStatementsJsonList = jsonValue.GetArray("atomicStatements");
    for (unsigned atomicStatementsIndex = 0; atomicStatementsIndex < atomicStatementsJsonList.GetLength(); ++atomicStatementsIndex) {
      m_atomicStatements.push_back(atomicStatementsJsonList[atomicStatementsIndex].AsObject());
    }
    m_atomicStatementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentContent")) {
    Aws::Utils::Array<JsonView> documentContentJsonList = jsonValue.GetArray("documentContent");
    for (unsigned documentContentIndex = 0; documentContentIndex < documentContentJsonList.GetLength(); ++documentContentIndex) {
      m_documentContent.push_back(documentContentJsonList[documentContentIndex].AsObject());
    }
    m_documentContentHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyReportSourceDocument::Jsonize() const {
  JsonValue payload;

  if (m_documentNameHasBeenSet) {
    payload.WithString("documentName", m_documentName);
  }

  if (m_documentHashHasBeenSet) {
    payload.WithString("documentHash", m_documentHash);
  }

  if (m_documentIdHasBeenSet) {
    payload.WithString("documentId", m_documentId);
  }

  if (m_atomicStatementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> atomicStatementsJsonList(m_atomicStatements.size());
    for (unsigned atomicStatementsIndex = 0; atomicStatementsIndex < atomicStatementsJsonList.GetLength(); ++atomicStatementsIndex) {
      atomicStatementsJsonList[atomicStatementsIndex].AsObject(m_atomicStatements[atomicStatementsIndex].Jsonize());
    }
    payload.WithArray("atomicStatements", std::move(atomicStatementsJsonList));
  }

  if (m_documentContentHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentContentJsonList(m_documentContent.size());
    for (unsigned documentContentIndex = 0; documentContentIndex < documentContentJsonList.GetLength(); ++documentContentIndex) {
      documentContentJsonList[documentContentIndex].AsObject(m_documentContent[documentContentIndex].Jsonize());
    }
    payload.WithArray("documentContent", std::move(documentContentJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

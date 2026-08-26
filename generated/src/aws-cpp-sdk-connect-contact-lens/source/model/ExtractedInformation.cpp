/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/ExtractedInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectContactLens {
namespace Model {

ExtractedInformation::ExtractedInformation(JsonView jsonValue) { *this = jsonValue; }

ExtractedInformation& ExtractedInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExtractionDefinitionId")) {
    m_extractionDefinitionId = jsonValue.GetString("ExtractionDefinitionId");
    m_extractionDefinitionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionDefinitionName")) {
    m_extractionDefinitionName = jsonValue.GetString("ExtractionDefinitionName");
    m_extractionDefinitionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractionDefinitionDisplayLabel")) {
    m_extractionDefinitionDisplayLabel = jsonValue.GetString("ExtractionDefinitionDisplayLabel");
    m_extractionDefinitionDisplayLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtractedValues")) {
    Aws::Utils::Array<JsonView> extractedValuesJsonList = jsonValue.GetArray("ExtractedValues");
    for (unsigned extractedValuesIndex = 0; extractedValuesIndex < extractedValuesJsonList.GetLength(); ++extractedValuesIndex) {
      m_extractedValues.push_back(extractedValuesJsonList[extractedValuesIndex].AsObject());
    }
    m_extractedValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureCode")) {
    m_failureCode = ExtractedInformationFailureCodeMapper::GetExtractedInformationFailureCodeForName(jsonValue.GetString("FailureCode"));
    m_failureCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractedInformation::Jsonize() const {
  JsonValue payload;

  if (m_extractionDefinitionIdHasBeenSet) {
    payload.WithString("ExtractionDefinitionId", m_extractionDefinitionId);
  }

  if (m_extractionDefinitionNameHasBeenSet) {
    payload.WithString("ExtractionDefinitionName", m_extractionDefinitionName);
  }

  if (m_extractionDefinitionDisplayLabelHasBeenSet) {
    payload.WithString("ExtractionDefinitionDisplayLabel", m_extractionDefinitionDisplayLabel);
  }

  if (m_extractedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> extractedValuesJsonList(m_extractedValues.size());
    for (unsigned extractedValuesIndex = 0; extractedValuesIndex < extractedValuesJsonList.GetLength(); ++extractedValuesIndex) {
      extractedValuesJsonList[extractedValuesIndex].AsObject(m_extractedValues[extractedValuesIndex].Jsonize());
    }
    payload.WithArray("ExtractedValues", std::move(extractedValuesJsonList));
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("FailureCode", ExtractedInformationFailureCodeMapper::GetNameForExtractedInformationFailureCode(m_failureCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws

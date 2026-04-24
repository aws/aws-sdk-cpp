/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibraryEntitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DataAutomationLibraryEntitySummary::DataAutomationLibraryEntitySummary(JsonView jsonValue) { *this = jsonValue; }

DataAutomationLibraryEntitySummary& DataAutomationLibraryEntitySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vocabulary")) {
    m_vocabulary = jsonValue.GetObject("vocabulary");
    m_vocabularyHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationLibraryEntitySummary::Jsonize() const {
  JsonValue payload;

  if (m_vocabularyHasBeenSet) {
    payload.WithObject("vocabulary", m_vocabulary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws

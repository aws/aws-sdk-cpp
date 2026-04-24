/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibrarySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DataAutomationLibrarySummary::DataAutomationLibrarySummary(JsonView jsonValue) { *this = jsonValue; }

DataAutomationLibrarySummary& DataAutomationLibrarySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("libraryArn")) {
    m_libraryArn = jsonValue.GetString("libraryArn");
    m_libraryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("libraryName")) {
    m_libraryName = jsonValue.GetString("libraryName");
    m_libraryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationLibrarySummary::Jsonize() const {
  JsonValue payload;

  if (m_libraryArnHasBeenSet) {
    payload.WithString("libraryArn", m_libraryArn);
  }

  if (m_libraryNameHasBeenSet) {
    payload.WithString("libraryName", m_libraryName);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws

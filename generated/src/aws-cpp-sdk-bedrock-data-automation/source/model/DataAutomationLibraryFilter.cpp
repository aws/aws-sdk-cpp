/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibraryFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DataAutomationLibraryFilter::DataAutomationLibraryFilter(JsonView jsonValue) { *this = jsonValue; }

DataAutomationLibraryFilter& DataAutomationLibraryFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("libraryArn")) {
    m_libraryArn = jsonValue.GetString("libraryArn");
    m_libraryArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationLibraryFilter::Jsonize() const {
  JsonValue payload;

  if (m_libraryArnHasBeenSet) {
    payload.WithString("libraryArn", m_libraryArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws

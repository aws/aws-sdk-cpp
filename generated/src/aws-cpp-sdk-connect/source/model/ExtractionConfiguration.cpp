/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtractionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtractionConfiguration::ExtractionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExtractionConfiguration& ExtractionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PromptHint")) {
    m_promptHint = jsonValue.GetString("PromptHint");
    m_promptHintHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotFoundBehavior")) {
    m_notFoundBehavior = jsonValue.GetObject("NotFoundBehavior");
    m_notFoundBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_promptHintHasBeenSet) {
    payload.WithString("PromptHint", m_promptHint);
  }

  if (m_notFoundBehaviorHasBeenSet) {
    payload.WithObject("NotFoundBehavior", m_notFoundBehavior.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

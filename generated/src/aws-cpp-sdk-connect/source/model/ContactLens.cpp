/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactLens.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactLens::ContactLens(JsonView jsonValue) { *this = jsonValue; }

ContactLens& ContactLens::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConversationalAnalytics")) {
    m_conversationalAnalytics = jsonValue.GetObject("ConversationalAnalytics");
    m_conversationalAnalyticsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactLens::Jsonize() const {
  JsonValue payload;

  if (m_conversationalAnalyticsHasBeenSet) {
    payload.WithObject("ConversationalAnalytics", m_conversationalAnalytics.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

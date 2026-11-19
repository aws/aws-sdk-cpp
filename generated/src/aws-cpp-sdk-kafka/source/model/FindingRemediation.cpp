/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/FindingRemediation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

FindingRemediation::FindingRemediation(JsonView jsonValue) { *this = jsonValue; }

FindingRemediation& FindingRemediation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documentationUrl")) {
    m_documentationUrl = jsonValue.GetString("documentationUrl");
    m_documentationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingRemediation::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", m_action);
  }

  if (m_documentationUrlHasBeenSet) {
    payload.WithString("documentationUrl", m_documentationUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

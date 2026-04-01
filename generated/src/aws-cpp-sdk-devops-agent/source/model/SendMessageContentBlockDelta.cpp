/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageContentBlockDelta.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageContentBlockDelta::SendMessageContentBlockDelta(JsonView jsonValue) { *this = jsonValue; }

SendMessageContentBlockDelta& SendMessageContentBlockDelta::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("textDelta")) {
    m_textDelta = jsonValue.GetObject("textDelta");
    m_textDeltaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jsonDelta")) {
    m_jsonDelta = jsonValue.GetObject("jsonDelta");
    m_jsonDeltaHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageContentBlockDelta::Jsonize() const {
  JsonValue payload;

  if (m_textDeltaHasBeenSet) {
    payload.WithObject("textDelta", m_textDelta.Jsonize());
  }

  if (m_jsonDeltaHasBeenSet) {
    payload.WithObject("jsonDelta", m_jsonDelta.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

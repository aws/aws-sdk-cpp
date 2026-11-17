/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/QueueAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

QueueAttributes::QueueAttributes(JsonView jsonValue) { *this = jsonValue; }

QueueAttributes& QueueAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VisibilityTimeoutSeconds")) {
    m_visibilityTimeoutSeconds = jsonValue.GetInteger("VisibilityTimeoutSeconds");
    m_visibilityTimeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeadLetterConfiguration")) {
    m_deadLetterConfiguration = jsonValue.GetObject("DeadLetterConfiguration");
    m_deadLetterConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueAttributes::Jsonize() const {
  JsonValue payload;

  if (m_visibilityTimeoutSecondsHasBeenSet) {
    payload.WithInteger("VisibilityTimeoutSeconds", m_visibilityTimeoutSeconds);
  }

  if (m_deadLetterConfigurationHasBeenSet) {
    payload.WithObject("DeadLetterConfiguration", m_deadLetterConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

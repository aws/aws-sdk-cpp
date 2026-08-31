/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SlackBidirectionalConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SlackBidirectionalConfiguration::SlackBidirectionalConfiguration(JsonView jsonValue) { *this = jsonValue; }

SlackBidirectionalConfiguration& SlackBidirectionalConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue SlackBidirectionalConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

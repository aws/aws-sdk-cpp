/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/NetworkAccessConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

NetworkAccessConfiguration::NetworkAccessConfiguration(JsonView jsonValue) { *this = jsonValue; }

NetworkAccessConfiguration& NetworkAccessConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("privateAccess")) {
    m_privateAccess = jsonValue.GetObject("privateAccess");
    m_privateAccessHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAccessConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_privateAccessHasBeenSet) {
    payload.WithObject("privateAccess", m_privateAccess.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/DescriptorSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {

DescriptorSource::DescriptorSource(JsonView jsonValue) { *this = jsonValue; }

DescriptorSource& DescriptorSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fromUrl")) {
    m_fromUrl = jsonValue.GetObject("fromUrl");
    m_fromUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue DescriptorSource::Jsonize() const {
  JsonValue payload;

  if (m_fromUrlHasBeenSet) {
    payload.WithObject("fromUrl", m_fromUrl.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws

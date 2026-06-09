/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/keyspacesstreams/model/IteratorDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KeyspacesStreams {
namespace Model {

IteratorDescription::IteratorDescription(JsonView jsonValue) { *this = jsonValue; }

IteratorDescription& IteratorDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("iteratorPosition")) {
    m_iteratorPosition = IteratorPositionMapper::GetIteratorPositionForName(jsonValue.GetString("iteratorPosition"));
    m_iteratorPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue IteratorDescription::Jsonize() const {
  JsonValue payload;

  if (m_iteratorPositionHasBeenSet) {
    payload.WithString("iteratorPosition", IteratorPositionMapper::GetNameForIteratorPosition(m_iteratorPosition));
  }

  return payload;
}

}  // namespace Model
}  // namespace KeyspacesStreams
}  // namespace Aws

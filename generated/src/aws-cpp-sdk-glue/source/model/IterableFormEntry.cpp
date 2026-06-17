/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IterableFormEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IterableFormEntry::IterableFormEntry(JsonView jsonValue) { *this = jsonValue; }

IterableFormEntry& IterableFormEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FormTypeId")) {
    m_formTypeId = jsonValue.GetString("FormTypeId");
    m_formTypeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IterableFormEntry::Jsonize() const {
  JsonValue payload;

  if (m_formTypeIdHasBeenSet) {
    payload.WithString("FormTypeId", m_formTypeId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

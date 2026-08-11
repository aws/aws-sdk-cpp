/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AvailableFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AvailableFilter::AvailableFilter(JsonView jsonValue) { *this = jsonValue; }

AvailableFilter& AvailableFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = AvailableFilterTypeMapper::GetAvailableFilterTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailableFilter::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", AvailableFilterTypeMapper::GetNameForAvailableFilterType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

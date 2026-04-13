/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/SortAttribute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

SortAttribute::SortAttribute(JsonView jsonValue) { *this = jsonValue; }

SortAttribute& SortAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataType")) {
    m_dataType = SegmentSortDataTypeMapper::GetSegmentSortDataTypeForName(jsonValue.GetString("DataType"));
    m_dataTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Order")) {
    m_order = SegmentSortOrderMapper::GetSegmentSortOrderForName(jsonValue.GetString("Order"));
    m_orderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = SortAttributeTypeMapper::GetSortAttributeTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SortAttribute::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_dataTypeHasBeenSet) {
    payload.WithString("DataType", SegmentSortDataTypeMapper::GetNameForSegmentSortDataType(m_dataType));
  }

  if (m_orderHasBeenSet) {
    payload.WithString("Order", SegmentSortOrderMapper::GetNameForSegmentSortOrder(m_order));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", SortAttributeTypeMapper::GetNameForSortAttributeType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws

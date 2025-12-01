/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class IcebergUpdateAction {
  NOT_SET,
  add_schema,
  set_current_schema,
  add_spec,
  set_default_spec,
  add_sort_order,
  set_default_sort_order,
  set_location,
  set_properties,
  remove_properties,
  add_encryption_key,
  remove_encryption_key
};

namespace IcebergUpdateActionMapper {
AWS_GLUE_API IcebergUpdateAction GetIcebergUpdateActionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIcebergUpdateAction(IcebergUpdateAction value);
}  // namespace IcebergUpdateActionMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws

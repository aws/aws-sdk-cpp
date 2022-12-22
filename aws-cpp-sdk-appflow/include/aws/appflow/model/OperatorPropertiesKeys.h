/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class OperatorPropertiesKeys
  {
    NOT_SET,
    VALUE,
    VALUES,
    DATA_TYPE,
    UPPER_BOUND,
    LOWER_BOUND,
    SOURCE_DATA_TYPE,
    DESTINATION_DATA_TYPE,
    VALIDATION_ACTION,
    MASK_VALUE,
    MASK_LENGTH,
    TRUNCATE_LENGTH,
    MATH_OPERATION_FIELDS_ORDER,
    CONCAT_FORMAT,
    SUBFIELD_CATEGORY_MAP,
    EXCLUDE_SOURCE_FIELDS_LIST,
    INCLUDE_NEW_FIELDS,
    ORDERED_PARTITION_KEYS_LIST
  };

namespace OperatorPropertiesKeysMapper
{
AWS_APPFLOW_API OperatorPropertiesKeys GetOperatorPropertiesKeysForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForOperatorPropertiesKeys(OperatorPropertiesKeys value);
} // namespace OperatorPropertiesKeysMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws

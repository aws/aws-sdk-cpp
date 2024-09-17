/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class TableAttributes
  {
    NOT_SET,
    NAME,
    TABLE_TYPE
  };

namespace TableAttributesMapper
{
AWS_GLUE_API TableAttributes GetTableAttributesForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTableAttributes(TableAttributes value);
} // namespace TableAttributesMapper
} // namespace Model
} // namespace Glue
} // namespace Aws

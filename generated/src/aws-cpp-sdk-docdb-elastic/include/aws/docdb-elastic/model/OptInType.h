/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{
  enum class OptInType
  {
    NOT_SET,
    IMMEDIATE,
    NEXT_MAINTENANCE,
    APPLY_ON,
    UNDO_OPT_IN
  };

namespace OptInTypeMapper
{
AWS_DOCDBELASTIC_API OptInType GetOptInTypeForName(const Aws::String& name);

AWS_DOCDBELASTIC_API Aws::String GetNameForOptInType(OptInType value);
} // namespace OptInTypeMapper
} // namespace Model
} // namespace DocDBElastic
} // namespace Aws

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
  enum class AllowFullTableExternalDataAccessEnum
  {
    NOT_SET,
    True,
    False
  };

namespace AllowFullTableExternalDataAccessEnumMapper
{
AWS_GLUE_API AllowFullTableExternalDataAccessEnum GetAllowFullTableExternalDataAccessEnumForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForAllowFullTableExternalDataAccessEnum(AllowFullTableExternalDataAccessEnum value);
} // namespace AllowFullTableExternalDataAccessEnumMapper
} // namespace Model
} // namespace Glue
} // namespace Aws

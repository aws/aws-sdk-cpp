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
  enum class SettingSource
  {
    NOT_SET,
    CATALOG,
    TABLE
  };

namespace SettingSourceMapper
{
AWS_GLUE_API SettingSource GetSettingSourceForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSettingSource(SettingSource value);
} // namespace SettingSourceMapper
} // namespace Model
} // namespace Glue
} // namespace Aws

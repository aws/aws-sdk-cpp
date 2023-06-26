/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class AppCategory
  {
    NOT_SET,
    LfR
  };

namespace AppCategoryMapper
{
AWS_LIGHTSAIL_API AppCategory GetAppCategoryForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAppCategory(AppCategory value);
} // namespace AppCategoryMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws

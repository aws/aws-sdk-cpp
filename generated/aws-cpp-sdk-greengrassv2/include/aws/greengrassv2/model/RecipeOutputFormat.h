/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class RecipeOutputFormat
  {
    NOT_SET,
    JSON,
    YAML
  };

namespace RecipeOutputFormatMapper
{
AWS_GREENGRASSV2_API RecipeOutputFormat GetRecipeOutputFormatForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForRecipeOutputFormat(RecipeOutputFormat value);
} // namespace RecipeOutputFormatMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Personalize
{
namespace Model
{
  enum class RecipeProvider
  {
    NOT_SET,
    SERVICE
  };

namespace RecipeProviderMapper
{
AWS_PERSONALIZE_API RecipeProvider GetRecipeProviderForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForRecipeProvider(RecipeProvider value);
} // namespace RecipeProviderMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws

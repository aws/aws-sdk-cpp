/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class MergeStrategy
  {
    NOT_SET,
    OVERWRITE
  };

namespace MergeStrategyMapper
{
AWS_TRANSLATE_API MergeStrategy GetMergeStrategyForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForMergeStrategy(MergeStrategy value);
} // namespace MergeStrategyMapper
} // namespace Model
} // namespace Translate
} // namespace Aws

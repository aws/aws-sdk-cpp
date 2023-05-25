/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class Split
  {
    NOT_SET,
    TRAIN,
    TEST
  };

namespace SplitMapper
{
AWS_COMPREHEND_API Split GetSplitForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForSplit(Split value);
} // namespace SplitMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws

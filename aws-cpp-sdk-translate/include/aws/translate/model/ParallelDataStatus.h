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
  enum class ParallelDataStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace ParallelDataStatusMapper
{
AWS_TRANSLATE_API ParallelDataStatus GetParallelDataStatusForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForParallelDataStatus(ParallelDataStatus value);
} // namespace ParallelDataStatusMapper
} // namespace Model
} // namespace Translate
} // namespace Aws

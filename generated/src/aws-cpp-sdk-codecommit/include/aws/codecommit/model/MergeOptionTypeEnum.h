/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class MergeOptionTypeEnum
  {
    NOT_SET,
    FAST_FORWARD_MERGE,
    SQUASH_MERGE,
    THREE_WAY_MERGE
  };

namespace MergeOptionTypeEnumMapper
{
AWS_CODECOMMIT_API MergeOptionTypeEnum GetMergeOptionTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForMergeOptionTypeEnum(MergeOptionTypeEnum value);
} // namespace MergeOptionTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws

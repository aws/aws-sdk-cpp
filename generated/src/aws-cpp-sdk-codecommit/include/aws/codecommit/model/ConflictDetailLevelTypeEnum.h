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
  enum class ConflictDetailLevelTypeEnum
  {
    NOT_SET,
    FILE_LEVEL,
    LINE_LEVEL
  };

namespace ConflictDetailLevelTypeEnumMapper
{
AWS_CODECOMMIT_API ConflictDetailLevelTypeEnum GetConflictDetailLevelTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForConflictDetailLevelTypeEnum(ConflictDetailLevelTypeEnum value);
} // namespace ConflictDetailLevelTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws

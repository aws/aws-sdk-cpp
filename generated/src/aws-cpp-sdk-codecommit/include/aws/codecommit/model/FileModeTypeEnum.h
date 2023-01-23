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
  enum class FileModeTypeEnum
  {
    NOT_SET,
    EXECUTABLE,
    NORMAL,
    SYMLINK
  };

namespace FileModeTypeEnumMapper
{
AWS_CODECOMMIT_API FileModeTypeEnum GetFileModeTypeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForFileModeTypeEnum(FileModeTypeEnum value);
} // namespace FileModeTypeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws

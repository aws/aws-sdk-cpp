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
  enum class RelativeFileVersionEnum
  {
    NOT_SET,
    BEFORE,
    AFTER
  };

namespace RelativeFileVersionEnumMapper
{
AWS_CODECOMMIT_API RelativeFileVersionEnum GetRelativeFileVersionEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForRelativeFileVersionEnum(RelativeFileVersionEnum value);
} // namespace RelativeFileVersionEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws

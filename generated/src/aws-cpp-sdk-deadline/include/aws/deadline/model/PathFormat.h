/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class PathFormat
  {
    NOT_SET,
    windows,
    posix
  };

namespace PathFormatMapper
{
AWS_DEADLINE_API PathFormat GetPathFormatForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForPathFormat(PathFormat value);
} // namespace PathFormatMapper
} // namespace Model
} // namespace deadline
} // namespace Aws

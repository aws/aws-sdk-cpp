/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    IMPORT,
    EXPORT,
    LOCAL_USE
  };

namespace JobTypeMapper
{
AWS_SNOWBALL_API JobType GetJobTypeForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws

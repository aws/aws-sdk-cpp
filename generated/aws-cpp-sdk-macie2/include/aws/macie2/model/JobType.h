/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    ONE_TIME,
    SCHEDULED
  };

namespace JobTypeMapper
{
AWS_MACIE2_API JobType GetJobTypeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws

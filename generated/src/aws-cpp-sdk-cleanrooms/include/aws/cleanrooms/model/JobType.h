/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    BATCH,
    INCREMENTAL,
    DELETE_ONLY
  };

namespace JobTypeMapper
{
AWS_CLEANROOMS_API JobType GetJobTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws

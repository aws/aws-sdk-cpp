/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    LAUNCH,
    TERMINATE,
    CREATE_CONVERTED_SNAPSHOT
  };

namespace JobTypeMapper
{
AWS_DRS_API JobType GetJobTypeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace drs
} // namespace Aws

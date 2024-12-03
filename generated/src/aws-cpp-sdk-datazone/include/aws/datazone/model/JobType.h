/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    LINEAGE
  };

namespace JobTypeMapper
{
AWS_DATAZONE_API JobType GetJobTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
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
AWS_ENTITYRESOLUTION_API JobType GetJobTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws

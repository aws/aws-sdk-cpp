/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>

namespace Aws {
namespace GlueDataBrew {
namespace Model {
enum class JobType { NOT_SET, PROFILE, RECIPE };

namespace JobTypeMapper {
AWS_GLUEDATABREW_API JobType GetJobTypeForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForJobType(JobType value);
}  // namespace JobTypeMapper
}  // namespace Model
}  // namespace GlueDataBrew
}  // namespace Aws

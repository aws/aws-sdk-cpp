﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class JobRunState { NOT_SET, STARTING, RUNNING, STOPPING, STOPPED, SUCCEEDED, FAILED, TIMEOUT, ERROR_, WAITING, EXPIRED };

namespace JobRunStateMapper {
AWS_GLUE_API JobRunState GetJobRunStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJobRunState(JobRunState value);
}  // namespace JobRunStateMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws

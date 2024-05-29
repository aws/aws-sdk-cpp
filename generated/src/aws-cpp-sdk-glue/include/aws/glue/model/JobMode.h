/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class JobMode
  {
    NOT_SET,
    SCRIPT,
    VISUAL,
    NOTEBOOK
  };

namespace JobModeMapper
{
AWS_GLUE_API JobMode GetJobModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJobMode(JobMode value);
} // namespace JobModeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws

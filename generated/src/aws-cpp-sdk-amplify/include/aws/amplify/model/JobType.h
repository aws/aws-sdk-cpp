/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class JobType
  {
    NOT_SET,
    RELEASE,
    RETRY,
    MANUAL,
    WEB_HOOK
  };

namespace JobTypeMapper
{
AWS_AMPLIFY_API JobType GetJobTypeForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForJobType(JobType value);
} // namespace JobTypeMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws

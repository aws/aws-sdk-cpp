/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class OptInStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace OptInStatusMapper
{
AWS_DEVOPSGURU_API OptInStatus GetOptInStatusForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForOptInStatus(OptInStatus value);
} // namespace OptInStatusMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

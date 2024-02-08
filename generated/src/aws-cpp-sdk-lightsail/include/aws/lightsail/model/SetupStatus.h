/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class SetupStatus
  {
    NOT_SET,
    succeeded,
    failed,
    inProgress
  };

namespace SetupStatusMapper
{
AWS_LIGHTSAIL_API SetupStatus GetSetupStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForSetupStatus(SetupStatus value);
} // namespace SetupStatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws

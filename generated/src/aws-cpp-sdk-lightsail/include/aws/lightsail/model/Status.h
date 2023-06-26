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
  enum class Status
  {
    NOT_SET,
    startExpired,
    notStarted,
    started,
    starting,
    stopped,
    stopping,
    settingUpInstance,
    failedInstanceCreation,
    failedStartingGUISession,
    failedStoppingGUISession
  };

namespace StatusMapper
{
AWS_LIGHTSAIL_API Status GetStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws

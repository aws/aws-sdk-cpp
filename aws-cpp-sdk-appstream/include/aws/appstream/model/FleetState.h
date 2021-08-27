/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class FleetState
  {
    NOT_SET,
    STARTING,
    RUNNING,
    STOPPING,
    STOPPED
  };

namespace FleetStateMapper
{
AWS_APPSTREAM_API FleetState GetFleetStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForFleetState(FleetState value);
} // namespace FleetStateMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws

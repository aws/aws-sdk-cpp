/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkLink
{
namespace Model
{
  enum class FleetStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    DELETED,
    FAILED_TO_CREATE,
    FAILED_TO_DELETE
  };

namespace FleetStatusMapper
{
AWS_WORKLINK_API FleetStatus GetFleetStatusForName(const Aws::String& name);

AWS_WORKLINK_API Aws::String GetNameForFleetStatus(FleetStatus value);
} // namespace FleetStatusMapper
} // namespace Model
} // namespace WorkLink
} // namespace Aws

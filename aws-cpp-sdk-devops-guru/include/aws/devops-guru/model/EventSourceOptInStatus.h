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
  enum class EventSourceOptInStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EventSourceOptInStatusMapper
{
AWS_DEVOPSGURU_API EventSourceOptInStatus GetEventSourceOptInStatusForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForEventSourceOptInStatus(EventSourceOptInStatus value);
} // namespace EventSourceOptInStatusMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

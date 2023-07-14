/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class InputStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    ACTIVE,
    DELETING
  };

namespace InputStatusMapper
{
AWS_IOTEVENTS_API InputStatus GetInputStatusForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForInputStatus(InputStatus value);
} // namespace InputStatusMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws

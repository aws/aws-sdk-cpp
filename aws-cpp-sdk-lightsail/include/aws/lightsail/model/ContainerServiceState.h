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
  enum class ContainerServiceState
  {
    NOT_SET,
    PENDING,
    READY,
    RUNNING,
    UPDATING,
    DELETING,
    DISABLED
  };

namespace ContainerServiceStateMapper
{
AWS_LIGHTSAIL_API ContainerServiceState GetContainerServiceStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContainerServiceState(ContainerServiceState value);
} // namespace ContainerServiceStateMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws

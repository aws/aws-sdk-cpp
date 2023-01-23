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
  enum class ContainerServicePowerName
  {
    NOT_SET,
    nano,
    micro,
    small,
    medium,
    large,
    xlarge
  };

namespace ContainerServicePowerNameMapper
{
AWS_LIGHTSAIL_API ContainerServicePowerName GetContainerServicePowerNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContainerServicePowerName(ContainerServicePowerName value);
} // namespace ContainerServicePowerNameMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws

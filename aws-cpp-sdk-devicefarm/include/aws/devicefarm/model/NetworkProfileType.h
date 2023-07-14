/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class NetworkProfileType
  {
    NOT_SET,
    CURATED,
    PRIVATE_
  };

namespace NetworkProfileTypeMapper
{
AWS_DEVICEFARM_API NetworkProfileType GetNetworkProfileTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForNetworkProfileType(NetworkProfileType value);
} // namespace NetworkProfileTypeMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

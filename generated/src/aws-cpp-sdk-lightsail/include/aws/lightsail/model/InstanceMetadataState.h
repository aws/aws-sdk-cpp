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
  enum class InstanceMetadataState
  {
    NOT_SET,
    pending,
    applied
  };

namespace InstanceMetadataStateMapper
{
AWS_LIGHTSAIL_API InstanceMetadataState GetInstanceMetadataStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceMetadataState(InstanceMetadataState value);
} // namespace InstanceMetadataStateMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws

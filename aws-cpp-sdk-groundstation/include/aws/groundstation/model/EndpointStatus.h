/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class EndpointStatus
  {
    NOT_SET,
    created,
    creating,
    deleted,
    deleting,
    failed
  };

namespace EndpointStatusMapper
{
AWS_GROUNDSTATION_API EndpointStatus GetEndpointStatusForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForEndpointStatus(EndpointStatus value);
} // namespace EndpointStatusMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws

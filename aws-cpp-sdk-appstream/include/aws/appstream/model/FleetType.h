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
  enum class FleetType
  {
    NOT_SET,
    ALWAYS_ON,
    ON_DEMAND
  };

namespace FleetTypeMapper
{
AWS_APPSTREAM_API FleetType GetFleetTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForFleetType(FleetType value);
} // namespace FleetTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws

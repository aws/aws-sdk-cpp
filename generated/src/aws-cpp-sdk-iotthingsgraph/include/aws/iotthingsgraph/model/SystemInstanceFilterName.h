/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{
  enum class SystemInstanceFilterName
  {
    NOT_SET,
    SYSTEM_TEMPLATE_ID,
    STATUS,
    GREENGRASS_GROUP_NAME
  };

namespace SystemInstanceFilterNameMapper
{
AWS_IOTTHINGSGRAPH_API SystemInstanceFilterName GetSystemInstanceFilterNameForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForSystemInstanceFilterName(SystemInstanceFilterName value);
} // namespace SystemInstanceFilterNameMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws

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
  enum class SystemTemplateFilterName
  {
    NOT_SET,
    FLOW_TEMPLATE_ID
  };

namespace SystemTemplateFilterNameMapper
{
AWS_IOTTHINGSGRAPH_API SystemTemplateFilterName GetSystemTemplateFilterNameForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForSystemTemplateFilterName(SystemTemplateFilterName value);
} // namespace SystemTemplateFilterNameMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws

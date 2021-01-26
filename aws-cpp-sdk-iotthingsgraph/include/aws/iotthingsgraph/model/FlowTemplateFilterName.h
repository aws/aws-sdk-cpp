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
  enum class FlowTemplateFilterName
  {
    NOT_SET,
    DEVICE_MODEL_ID
  };

namespace FlowTemplateFilterNameMapper
{
AWS_IOTTHINGSGRAPH_API FlowTemplateFilterName GetFlowTemplateFilterNameForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForFlowTemplateFilterName(FlowTemplateFilterName value);
} // namespace FlowTemplateFilterNameMapper
} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws

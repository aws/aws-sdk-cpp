/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class SignalNodeType
  {
    NOT_SET,
    SENSOR,
    ACTUATOR,
    ATTRIBUTE,
    BRANCH,
    CUSTOM_STRUCT,
    CUSTOM_PROPERTY
  };

namespace SignalNodeTypeMapper
{
AWS_IOTFLEETWISE_API SignalNodeType GetSignalNodeTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForSignalNodeType(SignalNodeType value);
} // namespace SignalNodeTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

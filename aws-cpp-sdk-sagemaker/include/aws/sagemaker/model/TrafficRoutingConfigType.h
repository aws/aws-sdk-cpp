/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class TrafficRoutingConfigType
  {
    NOT_SET,
    ALL_AT_ONCE,
    CANARY,
    LINEAR
  };

namespace TrafficRoutingConfigTypeMapper
{
AWS_SAGEMAKER_API TrafficRoutingConfigType GetTrafficRoutingConfigTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrafficRoutingConfigType(TrafficRoutingConfigType value);
} // namespace TrafficRoutingConfigTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

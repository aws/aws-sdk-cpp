/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class TargetDevice
  {
    NOT_SET,
    lambda,
    ml_m4,
    ml_m5,
    ml_c4,
    ml_c5,
    ml_p2,
    ml_p3,
    jetson_tx1,
    jetson_tx2,
    jetson_nano,
    rasp3b,
    deeplens,
    rk3399,
    rk3288
  };

namespace TargetDeviceMapper
{
AWS_SAGEMAKER_API TargetDevice GetTargetDeviceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTargetDevice(TargetDevice value);
} // namespace TargetDeviceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

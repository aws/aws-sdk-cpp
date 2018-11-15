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
  enum class InstanceType
  {
    NOT_SET,
    ml_t2_medium,
    ml_t2_large,
    ml_t2_xlarge,
    ml_t2_2xlarge,
    ml_t3_medium,
    ml_t3_large,
    ml_t3_xlarge,
    ml_t3_2xlarge,
    ml_m4_xlarge,
    ml_m4_2xlarge,
    ml_m4_4xlarge,
    ml_m4_10xlarge,
    ml_m4_16xlarge,
    ml_m5_xlarge,
    ml_m5_2xlarge,
    ml_m5_4xlarge,
    ml_m5_12xlarge,
    ml_m5_24xlarge,
    ml_c4_xlarge,
    ml_c4_2xlarge,
    ml_c4_4xlarge,
    ml_c4_8xlarge,
    ml_c5_xlarge,
    ml_c5_2xlarge,
    ml_c5_4xlarge,
    ml_c5_9xlarge,
    ml_c5_18xlarge,
    ml_c5d_xlarge,
    ml_c5d_2xlarge,
    ml_c5d_4xlarge,
    ml_c5d_9xlarge,
    ml_c5d_18xlarge,
    ml_p2_xlarge,
    ml_p2_8xlarge,
    ml_p2_16xlarge,
    ml_p3_2xlarge,
    ml_p3_8xlarge,
    ml_p3_16xlarge
  };

namespace InstanceTypeMapper
{
AWS_SAGEMAKER_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws

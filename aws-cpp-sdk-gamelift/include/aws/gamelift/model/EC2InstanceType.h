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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class EC2InstanceType
  {
    NOT_SET,
    t2_micro,
    t2_small,
    t2_medium,
    t2_large,
    c3_large,
    c3_xlarge,
    c3_2xlarge,
    c3_4xlarge,
    c3_8xlarge,
    c4_large,
    c4_xlarge,
    c4_2xlarge,
    c4_4xlarge,
    c4_8xlarge,
    r3_large,
    r3_xlarge,
    r3_2xlarge,
    r3_4xlarge,
    r3_8xlarge,
    m3_medium,
    m3_large,
    m3_xlarge,
    m3_2xlarge,
    m4_large,
    m4_xlarge,
    m4_2xlarge,
    m4_4xlarge,
    m4_10xlarge
  };

namespace EC2InstanceTypeMapper
{
AWS_GAMELIFT_API EC2InstanceType GetEC2InstanceTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForEC2InstanceType(EC2InstanceType value);
} // namespace EC2InstanceTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws

/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class InstanceType
  {
    NOT_SET,
    t1_micro,
    m1_small,
    m1_medium,
    m1_large,
    m1_xlarge,
    m3_medium,
    m3_large,
    m3_xlarge,
    m3_2xlarge,
    m4_large,
    m4_xlarge,
    m4_2xlarge,
    m4_4xlarge,
    m4_10xlarge,
    t2_nano,
    t2_micro,
    t2_small,
    t2_medium,
    t2_large,
    m2_xlarge,
    m2_2xlarge,
    m2_4xlarge,
    cr1_8xlarge,
    x1_4xlarge,
    x1_8xlarge,
    x1_16xlarge,
    x1_32xlarge,
    i2_xlarge,
    i2_2xlarge,
    i2_4xlarge,
    i2_8xlarge,
    hi1_4xlarge,
    hs1_8xlarge,
    c1_medium,
    c1_xlarge,
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
    cc1_4xlarge,
    cc2_8xlarge,
    g2_2xlarge,
    g2_8xlarge,
    cg1_4xlarge,
    r3_large,
    r3_xlarge,
    r3_2xlarge,
    r3_4xlarge,
    r3_8xlarge,
    d2_xlarge,
    d2_2xlarge,
    d2_4xlarge,
    d2_8xlarge
  };

namespace InstanceTypeMapper
{
AWS_EC2_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws

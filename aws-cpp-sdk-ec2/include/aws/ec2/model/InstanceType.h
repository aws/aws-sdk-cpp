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
    t2_nano,
    t2_micro,
    t2_small,
    t2_medium,
    t2_large,
    t2_xlarge,
    t2_2xlarge,
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
    m4_16xlarge,
    m2_xlarge,
    m2_2xlarge,
    m2_4xlarge,
    cr1_8xlarge,
    r3_large,
    r3_xlarge,
    r3_2xlarge,
    r3_4xlarge,
    r3_8xlarge,
    r4_large,
    r4_xlarge,
    r4_2xlarge,
    r4_4xlarge,
    r4_8xlarge,
    r4_16xlarge,
    x1_16xlarge,
    x1_32xlarge,
    x1e_xlarge,
    x1e_2xlarge,
    x1e_4xlarge,
    x1e_8xlarge,
    x1e_16xlarge,
    x1e_32xlarge,
    i2_xlarge,
    i2_2xlarge,
    i2_4xlarge,
    i2_8xlarge,
    i3_large,
    i3_xlarge,
    i3_2xlarge,
    i3_4xlarge,
    i3_8xlarge,
    i3_16xlarge,
    i3_metal,
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
    c5_large,
    c5_xlarge,
    c5_2xlarge,
    c5_4xlarge,
    c5_9xlarge,
    c5_18xlarge,
    c5d_large,
    c5d_xlarge,
    c5d_2xlarge,
    c5d_4xlarge,
    c5d_9xlarge,
    c5d_18xlarge,
    cc1_4xlarge,
    cc2_8xlarge,
    g2_2xlarge,
    g2_8xlarge,
    g3_4xlarge,
    g3_8xlarge,
    g3_16xlarge,
    cg1_4xlarge,
    p2_xlarge,
    p2_8xlarge,
    p2_16xlarge,
    p3_2xlarge,
    p3_8xlarge,
    p3_16xlarge,
    d2_xlarge,
    d2_2xlarge,
    d2_4xlarge,
    d2_8xlarge,
    f1_2xlarge,
    f1_16xlarge,
    m5_large,
    m5_xlarge,
    m5_2xlarge,
    m5_4xlarge,
    m5_12xlarge,
    m5_24xlarge,
    h1_2xlarge,
    h1_4xlarge,
    h1_8xlarge,
    h1_16xlarge
  };

namespace InstanceTypeMapper
{
AWS_EC2_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws

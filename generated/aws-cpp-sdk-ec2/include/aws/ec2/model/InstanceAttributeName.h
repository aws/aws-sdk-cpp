/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class InstanceAttributeName
  {
    NOT_SET,
    instanceType,
    kernel,
    ramdisk,
    userData,
    disableApiTermination,
    instanceInitiatedShutdownBehavior,
    rootDeviceName,
    blockDeviceMapping,
    productCodes,
    sourceDestCheck,
    groupSet,
    ebsOptimized,
    sriovNetSupport,
    enaSupport,
    enclaveOptions
  };

namespace InstanceAttributeNameMapper
{
AWS_EC2_API InstanceAttributeName GetInstanceAttributeNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceAttributeName(InstanceAttributeName value);
} // namespace InstanceAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws

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
  enum class ImageAttributeName
  {
    NOT_SET,
    description,
    kernel,
    ramdisk,
    launchPermission,
    productCodes,
    blockDeviceMapping,
    sriovNetSupport,
    bootMode,
    tpmSupport,
    uefiData,
    lastLaunchedTime,
    imdsSupport
  };

namespace ImageAttributeNameMapper
{
AWS_EC2_API ImageAttributeName GetImageAttributeNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForImageAttributeName(ImageAttributeName value);
} // namespace ImageAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws

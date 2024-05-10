/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class S3EndpointType
  {
    NOT_SET,
    REGIONAL,
    GLOBAL
  };

namespace S3EndpointTypeMapper
{
AWS_GREENGRASSV2_API S3EndpointType GetS3EndpointTypeForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForS3EndpointType(S3EndpointType value);
} // namespace S3EndpointTypeMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

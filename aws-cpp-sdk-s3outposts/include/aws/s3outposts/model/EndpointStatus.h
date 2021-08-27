/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Outposts
{
namespace Model
{
  enum class EndpointStatus
  {
    NOT_SET,
    PENDING,
    AVAILABLE
  };

namespace EndpointStatusMapper
{
AWS_S3OUTPOSTS_API EndpointStatus GetEndpointStatusForName(const Aws::String& name);

AWS_S3OUTPOSTS_API Aws::String GetNameForEndpointStatus(EndpointStatus value);
} // namespace EndpointStatusMapper
} // namespace Model
} // namespace S3Outposts
} // namespace Aws

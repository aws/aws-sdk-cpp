/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/S3ControlARN.h>

namespace Aws
{

namespace S3Control
{
namespace S3ControlEndpoint
{
  /**
   * Compute endpoint based on region.
   * @param regionName The AWS region used in the endpoint
   * @param useDualStack Using dual-stack endpoint if true
   * @param hasOutpostId Using s3-outposts as service name if true
   */
  AWS_S3CONTROL_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false, bool hasOutpostId = false);

  /**
   * Compute endpoint based on Outposts ARN.
   * @param arn The S3 Outposts ARN
   * @param regionNameOverride Override region name in ARN if it's not empty
   */
  AWS_S3CONTROL_API Aws::String ForOutpostsArn(const S3ControlARN& arn, const Aws::String& regionNameOverride = "");
} // namespace S3ControlEndpoint
} // namespace S3Control
} // namespace Aws

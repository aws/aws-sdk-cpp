﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3CrtARN.h>

namespace Aws
{

namespace S3Crt
{
namespace S3CrtEndpoint
{
  /**
   * Compute endpoint based on region.
   * @param regionName The AWS region used in the endpoint
   * @param useDualStack Using dual-stack endpoint if true
   * @param USEast1UseRegionalEndpoint Using global endpoint for us-east-1 if the value is LEGACY, or using regional endpoint if it's REGIONAL
   */
  AWS_S3CRT_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false, bool USEast1UseRegionalEndpoint = false, const Aws::String& serviceName = "");

  /**
   * Compute endpoint based on Access Point ARN.
   * @param arn The S3 Access Point ARN
   * @param regionNameOverride Override region name in ARN if it's not empty
   * @param useDualStack Using dual-stack endpoint if true
   * @param endpointOverride Override endpoint if it's not empty
   */
  AWS_S3CRT_API Aws::String ForAccessPointArn(const S3CrtARN& arn, const Aws::String& regionNameOverride = "", bool useDualStack = false, const Aws::String& endpointOverride = "");

  /**
   * Compute endpoint based on Multi Region Access Point ARN.
   * @param arn The S3 Multi Region Access Point ARN
   */
  AWS_S3CRT_API Aws::String ForMultiRegionAccessPointArn(const S3CrtARN& arn, bool useDualStack = false, const Aws::String& endpointOverride = "");

  /**
   * Compute endpoint based on Outposts ARN.
   * @param arn The S3 Outposts ARN
   * @param regionNameOverride Override region name in ARN if it's not empty
   * @param useDualStack Using dual-stack endpoint if true
   * @param endpointOverride Override endpoint if it's not empty
   */
  AWS_S3CRT_API Aws::String ForOutpostsArn(const S3CrtARN& arn, const Aws::String& regionNameOverride = "", bool useDualStack = false, const Aws::String& endpointOverride = "");

  /**
   * Compute endpoint based on Object Lambda Access Point ARN.
   * @param arn The S3 Object Lambda Access Point ARN
   * @param regionNameOverride Override region name in ARN if it's not empty
   * @param useDualStack Using dual-stack endpoint if true
   * @param endpointOverride Override endpoint if it's not empty
   */
  AWS_S3CRT_API Aws::String ForObjectLambdaAccessPointArn(const S3CrtARN& arn, const Aws::String& regionNameOverride = "", bool useDualStack = false, const Aws::String& endpointOverride = "");
} // namespace S3CrtEndpoint
} // namespace S3Crt
} // namespace Aws

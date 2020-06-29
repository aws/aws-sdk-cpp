/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace S3Control
{
namespace S3ControlEndpoint
{
AWS_S3CONTROL_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace S3ControlEndpoint
} // namespace S3Control
} // namespace Aws

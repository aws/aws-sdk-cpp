/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace EC2
{
namespace EC2Endpoint
{
AWS_EC2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace EC2Endpoint
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace EC2InstanceConnect
{
namespace EC2InstanceConnectEndpoint
{
AWS_EC2INSTANCECONNECT_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace EC2InstanceConnectEndpoint
} // namespace EC2InstanceConnect
} // namespace Aws

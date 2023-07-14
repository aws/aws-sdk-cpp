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
  enum class TrafficMirrorNetworkService
  {
    NOT_SET,
    amazon_dns
  };

namespace TrafficMirrorNetworkServiceMapper
{
AWS_EC2_API TrafficMirrorNetworkService GetTrafficMirrorNetworkServiceForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTrafficMirrorNetworkService(TrafficMirrorNetworkService value);
} // namespace TrafficMirrorNetworkServiceMapper
} // namespace Model
} // namespace EC2
} // namespace Aws

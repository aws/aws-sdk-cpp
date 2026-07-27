/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/EC2EndpointProvider.h>
#include <aws/ec2/internal/EC2EndpointRules.h>

namespace Aws {
namespace EC2 {
namespace Endpoint {
EC2EndpointProvider::EC2EndpointProvider()
    : EC2DefaultEpProviderBase(Aws::EC2::EC2EndpointRules::GetRulesBlob(), Aws::EC2::EC2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EC2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointProvider.h>
#include <aws/ec2-instance-connect/internal/EC2InstanceConnectEndpointRules.h>

namespace Aws {
namespace EC2InstanceConnect {
namespace Endpoint {
EC2InstanceConnectEndpointProvider::EC2InstanceConnectEndpointProvider()
    : EC2InstanceConnectDefaultEpProviderBase(Aws::EC2InstanceConnect::EC2InstanceConnectEndpointRules::GetRulesBlob(),
                                              Aws::EC2InstanceConnect::EC2InstanceConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EC2InstanceConnect
}  // namespace Aws

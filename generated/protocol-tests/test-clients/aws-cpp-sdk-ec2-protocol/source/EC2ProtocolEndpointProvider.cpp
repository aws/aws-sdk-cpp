/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/EC2ProtocolEndpointProvider.h>
#include <aws/ec2-protocol/internal/EC2ProtocolEndpointRules.h>

namespace Aws {
namespace EC2Protocol {
namespace Endpoint {
EC2ProtocolEndpointProvider::EC2ProtocolEndpointProvider()
    : EC2ProtocolDefaultEpProviderBase(Aws::EC2Protocol::EC2ProtocolEndpointRules::GetRulesBlob(),
                                       Aws::EC2Protocol::EC2ProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EC2Protocol
}  // namespace Aws

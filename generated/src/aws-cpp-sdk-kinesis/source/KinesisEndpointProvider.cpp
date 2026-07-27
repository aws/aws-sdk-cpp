/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/KinesisEndpointProvider.h>
#include <aws/kinesis/internal/KinesisEndpointRules.h>

namespace Aws {
namespace Kinesis {
namespace Endpoint {
KinesisEndpointProvider::KinesisEndpointProvider()
    : KinesisDefaultEpProviderBase(Aws::Kinesis::KinesisEndpointRules::GetRulesBlob(), Aws::Kinesis::KinesisEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Kinesis
}  // namespace Aws

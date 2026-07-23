/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/FirehoseEndpointProvider.h>
#include <aws/firehose/internal/FirehoseEndpointRules.h>

namespace Aws {
namespace Firehose {
namespace Endpoint {
FirehoseEndpointProvider::FirehoseEndpointProvider()
    : FirehoseDefaultEpProviderBase(Aws::Firehose::FirehoseEndpointRules::GetRulesBlob(),
                                    Aws::Firehose::FirehoseEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Firehose
}  // namespace Aws

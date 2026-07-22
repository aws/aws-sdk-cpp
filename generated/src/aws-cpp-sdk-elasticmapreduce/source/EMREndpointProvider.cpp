/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/EMREndpointProvider.h>
#include <aws/elasticmapreduce/internal/EMREndpointRules.h>

namespace Aws {
namespace EMR {
namespace Endpoint {
EMREndpointProvider::EMREndpointProvider()
    : EMRDefaultEpProviderBase(Aws::EMR::EMREndpointRules::GetRulesBlob(), Aws::EMR::EMREndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EMR
}  // namespace Aws

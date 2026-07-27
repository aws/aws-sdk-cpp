/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <aws/emr-containers/internal/EMRContainersEndpointRules.h>

namespace Aws {
namespace EMRContainers {
namespace Endpoint {
EMRContainersEndpointProvider::EMRContainersEndpointProvider()
    : EMRContainersDefaultEpProviderBase(Aws::EMRContainers::EMRContainersEndpointRules::GetRulesBlob(),
                                         Aws::EMRContainers::EMRContainersEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EMRContainers
}  // namespace Aws

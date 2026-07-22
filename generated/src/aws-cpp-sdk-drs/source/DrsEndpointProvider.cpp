/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/DrsEndpointProvider.h>
#include <aws/drs/internal/DrsEndpointRules.h>

namespace Aws {
namespace drs {
namespace Endpoint {
DrsEndpointProvider::DrsEndpointProvider()
    : DrsDefaultEpProviderBase(Aws::drs::DrsEndpointRules::GetRulesBlob(), Aws::drs::DrsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace drs
}  // namespace Aws

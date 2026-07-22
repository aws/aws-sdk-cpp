/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/IvschatEndpointProvider.h>
#include <aws/ivschat/internal/IvschatEndpointRules.h>

namespace Aws {
namespace ivschat {
namespace Endpoint {
IvschatEndpointProvider::IvschatEndpointProvider()
    : IvschatDefaultEpProviderBase(Aws::ivschat::IvschatEndpointRules::GetRulesBlob(), Aws::ivschat::IvschatEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ivschat
}  // namespace Aws

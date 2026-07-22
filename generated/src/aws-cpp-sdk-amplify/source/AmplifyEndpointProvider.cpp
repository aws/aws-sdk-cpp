/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/AmplifyEndpointProvider.h>
#include <aws/amplify/internal/AmplifyEndpointRules.h>

namespace Aws {
namespace Amplify {
namespace Endpoint {
AmplifyEndpointProvider::AmplifyEndpointProvider()
    : AmplifyDefaultEpProviderBase(Aws::Amplify::AmplifyEndpointRules::GetRulesBlob(), Aws::Amplify::AmplifyEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Amplify
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpointProvider.h>
#include <aws/amplifyuibuilder/internal/AmplifyUIBuilderEndpointRules.h>

namespace Aws {
namespace AmplifyUIBuilder {
namespace Endpoint {
AmplifyUIBuilderEndpointProvider::AmplifyUIBuilderEndpointProvider()
    : AmplifyUIBuilderDefaultEpProviderBase(Aws::AmplifyUIBuilder::AmplifyUIBuilderEndpointRules::GetRulesBlob(),
                                            Aws::AmplifyUIBuilder::AmplifyUIBuilderEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AmplifyUIBuilder
}  // namespace Aws

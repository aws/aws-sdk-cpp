/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/ConnectContactLensEndpointProvider.h>
#include <aws/connect-contact-lens/internal/ConnectContactLensEndpointRules.h>

namespace Aws {
namespace ConnectContactLens {
namespace Endpoint {
ConnectContactLensEndpointProvider::ConnectContactLensEndpointProvider()
    : ConnectContactLensDefaultEpProviderBase(Aws::ConnectContactLens::ConnectContactLensEndpointRules::GetRulesBlob(),
                                              Aws::ConnectContactLens::ConnectContactLensEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectContactLens
}  // namespace Aws

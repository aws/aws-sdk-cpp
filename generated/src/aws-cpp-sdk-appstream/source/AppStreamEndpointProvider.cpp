/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/AppStreamEndpointProvider.h>
#include <aws/appstream/internal/AppStreamEndpointRules.h>

namespace Aws {
namespace AppStream {
namespace Endpoint {
AppStreamEndpointProvider::AppStreamEndpointProvider()
    : AppStreamDefaultEpProviderBase(Aws::AppStream::AppStreamEndpointRules::GetRulesBlob(),
                                     Aws::AppStream::AppStreamEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppStream
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/KeyspacesStreamsEndpointProvider.h>
#include <aws/keyspacesstreams/internal/KeyspacesStreamsEndpointRules.h>

namespace Aws {
namespace KeyspacesStreams {
namespace Endpoint {
KeyspacesStreamsEndpointProvider::KeyspacesStreamsEndpointProvider()
    : KeyspacesStreamsDefaultEpProviderBase(Aws::KeyspacesStreams::KeyspacesStreamsEndpointRules::GetRulesBlob(),
                                            Aws::KeyspacesStreams::KeyspacesStreamsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KeyspacesStreams
}  // namespace Aws

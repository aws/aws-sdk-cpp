/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/CloudWatchEventsEndpointProvider.h>
#include <aws/events/internal/CloudWatchEventsEndpointRules.h>

namespace Aws {
namespace CloudWatchEvents {
namespace Endpoint {
CloudWatchEventsEndpointProvider::CloudWatchEventsEndpointProvider()
    : CloudWatchEventsDefaultEpProviderBase(Aws::CloudWatchEvents::CloudWatchEventsEndpointRules::GetRulesBlob(),
                                            Aws::CloudWatchEvents::CloudWatchEventsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudWatchEvents
}  // namespace Aws

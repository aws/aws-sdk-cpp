/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/KinesisVideoEndpointProvider.h>
#include <aws/kinesisvideo/internal/KinesisVideoEndpointRules.h>

namespace Aws {
namespace KinesisVideo {
namespace Endpoint {
KinesisVideoEndpointProvider::KinesisVideoEndpointProvider()
    : KinesisVideoDefaultEpProviderBase(Aws::KinesisVideo::KinesisVideoEndpointRules::GetRulesBlob(),
                                        Aws::KinesisVideo::KinesisVideoEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisVideo
}  // namespace Aws

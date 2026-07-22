/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/KinesisVideoMediaEndpointProvider.h>
#include <aws/kinesis-video-media/internal/KinesisVideoMediaEndpointRules.h>

namespace Aws {
namespace KinesisVideoMedia {
namespace Endpoint {
KinesisVideoMediaEndpointProvider::KinesisVideoMediaEndpointProvider()
    : KinesisVideoMediaDefaultEpProviderBase(Aws::KinesisVideoMedia::KinesisVideoMediaEndpointRules::GetRulesBlob(),
                                             Aws::KinesisVideoMedia::KinesisVideoMediaEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisVideoMedia
}  // namespace Aws

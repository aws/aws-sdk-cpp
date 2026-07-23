/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointProvider.h>
#include <aws/kinesis-video-archived-media/internal/KinesisVideoArchivedMediaEndpointRules.h>

namespace Aws {
namespace KinesisVideoArchivedMedia {
namespace Endpoint {
KinesisVideoArchivedMediaEndpointProvider::KinesisVideoArchivedMediaEndpointProvider()
    : KinesisVideoArchivedMediaDefaultEpProviderBase(
          Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaEndpointRules::GetRulesBlob(),
          Aws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws

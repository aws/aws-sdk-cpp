/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClient.h>
#include <aws/kinesis-video-archived-media/model/GetImagesPaginationTraits.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsPaginationTraits.h>

namespace Aws {
namespace KinesisVideoArchivedMedia {

using GetImagesPaginator = Aws::Utils::Pagination::Paginator<KinesisVideoArchivedMediaClient, Model::GetImagesRequest,
                                                             Pagination::GetImagesPaginationTraits<KinesisVideoArchivedMediaClient>>;
using ListFragmentsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisVideoArchivedMediaClient, Model::ListFragmentsRequest,
                                      Pagination::ListFragmentsPaginationTraits<KinesisVideoArchivedMediaClient>>;

}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws

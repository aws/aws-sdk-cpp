/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesis-video-archived-media/model/GetImagesPaginationTraits.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaClient;

template <typename DerivedClient>
class KinesisVideoArchivedMediaPaginationBase {
 public:
  /**
   * Create a paginator for GetImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetImagesRequest, Pagination::GetImagesPaginationTraits<DerivedClient>>
  GetImagesPaginator(const Model::GetImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetImagesRequest, Pagination::GetImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFragments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFragmentsRequest, Pagination::ListFragmentsPaginationTraits<DerivedClient>>
  ListFragmentsPaginator(const Model::ListFragmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFragmentsRequest,
                                             Pagination::ListFragmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws

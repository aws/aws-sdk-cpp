/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ConnectContactLens {

class ConnectContactLensClient;

template <typename DerivedClient>
class ConnectContactLensPaginationBase {
 public:
  /**
   * Create a paginator for ListRealtimeContactAnalysisSegments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRealtimeContactAnalysisSegmentsRequest,
                                    Pagination::ListRealtimeContactAnalysisSegmentsPaginationTraits<DerivedClient>>
  ListRealtimeContactAnalysisSegmentsPaginator(const Model::ListRealtimeContactAnalysisSegmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRealtimeContactAnalysisSegmentsRequest,
                                             Pagination::ListRealtimeContactAnalysisSegmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ConnectContactLens
}  // namespace Aws

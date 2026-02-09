/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLensClient.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ConnectContactLens {

using ListRealtimeContactAnalysisSegmentsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectContactLensClient, Model::ListRealtimeContactAnalysisSegmentsRequest,
                                      Pagination::ListRealtimeContactAnalysisSegmentsPaginationTraits<ConnectContactLensClient>>;

}  // namespace ConnectContactLens
}  // namespace Aws

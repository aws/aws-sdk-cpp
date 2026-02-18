/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/connectparticipant/model/GetTranscriptPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ConnectParticipant {

class ConnectParticipantClient;

template <typename DerivedClient>
class ConnectParticipantPaginationBase {
 public:
  /**
   * Create a paginator for GetTranscript operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTranscriptRequest, Pagination::GetTranscriptPaginationTraits<DerivedClient>>
  GetTranscriptPaginator(const Model::GetTranscriptRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTranscriptRequest,
                                             Pagination::GetTranscriptPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace ConnectParticipant
}  // namespace Aws

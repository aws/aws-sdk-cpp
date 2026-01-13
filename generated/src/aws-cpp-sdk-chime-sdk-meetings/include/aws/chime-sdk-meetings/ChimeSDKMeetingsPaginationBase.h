/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/chime-sdk-meetings/model/ListAttendeesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ChimeSDKMeetings {

class ChimeSDKMeetingsClient;

template <typename DerivedClient>
class ChimeSDKMeetingsPaginationBase {
 public:
  /**
   * Create a paginator for ListAttendees operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttendeesRequest, Pagination::ListAttendeesPaginationTraits<DerivedClient>>
  ListAttendeesPaginator(const Model::ListAttendeesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttendeesRequest,
                                             Pagination::ListAttendeesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace ChimeSDKMeetings
}  // namespace Aws

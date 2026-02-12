/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClient.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ChimeSDKMeetings {

using ListAttendeesPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKMeetingsClient, Model::ListAttendeesRequest,
                                                                 Pagination::ListAttendeesPaginationTraits<ChimeSDKMeetingsClient>>;

}  // namespace ChimeSDKMeetings
}  // namespace Aws

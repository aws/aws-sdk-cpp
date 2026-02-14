/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipantClient.h>
#include <aws/connectparticipant/model/GetTranscriptPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ConnectParticipant {

using GetTranscriptPaginator = Aws::Utils::Pagination::Paginator<ConnectParticipantClient, Model::GetTranscriptRequest,
                                                                 Pagination::GetTranscriptPaginationTraits<ConnectParticipantClient>>;

}  // namespace ConnectParticipant
}  // namespace Aws

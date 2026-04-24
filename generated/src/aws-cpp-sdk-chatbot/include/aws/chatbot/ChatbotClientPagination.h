/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/ChatbotClient.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsPaginationTraits.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsPaginationTraits.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesPaginationTraits.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesPaginationTraits.h>
#include <aws/chatbot/model/ListAssociationsPaginationTraits.h>
#include <aws/chatbot/model/ListCustomActionsPaginationTraits.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsPaginationTraits.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsPaginationTraits.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace chatbot {

using DescribeChimeWebhookConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::DescribeChimeWebhookConfigurationsRequest,
                                      Pagination::DescribeChimeWebhookConfigurationsPaginationTraits<ChatbotClient>>;
using DescribeSlackChannelConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::DescribeSlackChannelConfigurationsRequest,
                                      Pagination::DescribeSlackChannelConfigurationsPaginationTraits<ChatbotClient>>;
using DescribeSlackUserIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::DescribeSlackUserIdentitiesRequest,
                                      Pagination::DescribeSlackUserIdentitiesPaginationTraits<ChatbotClient>>;
using DescribeSlackWorkspacesPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::DescribeSlackWorkspacesRequest,
                                      Pagination::DescribeSlackWorkspacesPaginationTraits<ChatbotClient>>;
using ListAssociationsPaginator = Aws::Utils::Pagination::Paginator<ChatbotClient, Model::ListAssociationsRequest,
                                                                    Pagination::ListAssociationsPaginationTraits<ChatbotClient>>;
using ListCustomActionsPaginator = Aws::Utils::Pagination::Paginator<ChatbotClient, Model::ListCustomActionsRequest,
                                                                     Pagination::ListCustomActionsPaginationTraits<ChatbotClient>>;
using ListMicrosoftTeamsChannelConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::ListMicrosoftTeamsChannelConfigurationsRequest,
                                      Pagination::ListMicrosoftTeamsChannelConfigurationsPaginationTraits<ChatbotClient>>;
using ListMicrosoftTeamsConfiguredTeamsPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::ListMicrosoftTeamsConfiguredTeamsRequest,
                                      Pagination::ListMicrosoftTeamsConfiguredTeamsPaginationTraits<ChatbotClient>>;
using ListMicrosoftTeamsUserIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<ChatbotClient, Model::ListMicrosoftTeamsUserIdentitiesRequest,
                                      Pagination::ListMicrosoftTeamsUserIdentitiesPaginationTraits<ChatbotClient>>;

}  // namespace chatbot
}  // namespace Aws

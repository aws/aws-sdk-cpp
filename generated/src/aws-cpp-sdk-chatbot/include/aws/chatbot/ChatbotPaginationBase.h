/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace chatbot {

class ChatbotClient;

template <typename DerivedClient>
class ChatbotPaginationBase {
 public:
  /**
   * Create a paginator for DescribeChimeWebhookConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeChimeWebhookConfigurationsRequest,
                                    Pagination::DescribeChimeWebhookConfigurationsPaginationTraits<DerivedClient>>
  DescribeChimeWebhookConfigurationsPaginator(const Model::DescribeChimeWebhookConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeChimeWebhookConfigurationsRequest,
                                             Pagination::DescribeChimeWebhookConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSlackChannelConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSlackChannelConfigurationsRequest,
                                    Pagination::DescribeSlackChannelConfigurationsPaginationTraits<DerivedClient>>
  DescribeSlackChannelConfigurationsPaginator(const Model::DescribeSlackChannelConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSlackChannelConfigurationsRequest,
                                             Pagination::DescribeSlackChannelConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSlackUserIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSlackUserIdentitiesRequest,
                                    Pagination::DescribeSlackUserIdentitiesPaginationTraits<DerivedClient>>
  DescribeSlackUserIdentitiesPaginator(const Model::DescribeSlackUserIdentitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSlackUserIdentitiesRequest,
                                             Pagination::DescribeSlackUserIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSlackWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSlackWorkspacesRequest,
                                    Pagination::DescribeSlackWorkspacesPaginationTraits<DerivedClient>>
  DescribeSlackWorkspacesPaginator(const Model::DescribeSlackWorkspacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSlackWorkspacesRequest,
                                             Pagination::DescribeSlackWorkspacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                    Pagination::ListAssociationsPaginationTraits<DerivedClient>>
  ListAssociationsPaginator(const Model::ListAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                             Pagination::ListAssociationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCustomActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomActionsRequest,
                                    Pagination::ListCustomActionsPaginationTraits<DerivedClient>>
  ListCustomActionsPaginator(const Model::ListCustomActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomActionsRequest,
                                             Pagination::ListCustomActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrosoftTeamsChannelConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrosoftTeamsChannelConfigurationsRequest,
                                    Pagination::ListMicrosoftTeamsChannelConfigurationsPaginationTraits<DerivedClient>>
  ListMicrosoftTeamsChannelConfigurationsPaginator(const Model::ListMicrosoftTeamsChannelConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrosoftTeamsChannelConfigurationsRequest,
                                             Pagination::ListMicrosoftTeamsChannelConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrosoftTeamsConfiguredTeams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrosoftTeamsConfiguredTeamsRequest,
                                    Pagination::ListMicrosoftTeamsConfiguredTeamsPaginationTraits<DerivedClient>>
  ListMicrosoftTeamsConfiguredTeamsPaginator(const Model::ListMicrosoftTeamsConfiguredTeamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrosoftTeamsConfiguredTeamsRequest,
                                             Pagination::ListMicrosoftTeamsConfiguredTeamsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrosoftTeamsUserIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrosoftTeamsUserIdentitiesRequest,
                                    Pagination::ListMicrosoftTeamsUserIdentitiesPaginationTraits<DerivedClient>>
  ListMicrosoftTeamsUserIdentitiesPaginator(const Model::ListMicrosoftTeamsUserIdentitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrosoftTeamsUserIdentitiesRequest,
                                             Pagination::ListMicrosoftTeamsUserIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace chatbot
}  // namespace Aws

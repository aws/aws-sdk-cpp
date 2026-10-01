/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesPaginationTraits.h>
#include <aws/endusermessaging/model/ListBrandProfilesPaginationTraits.h>
#include <aws/endusermessaging/model/ListJobsPaginationTraits.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsPaginationTraits.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfilePaginationTraits.h>

#include <memory>

namespace Aws {
namespace EndUserMessaging {

template <typename DerivedClient>
class EndUserMessagingPaginationBase {
 public:
  /**
   * Create a paginator for ListBrandProfileAttributes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrandProfileAttributesRequest,
                                    Pagination::ListBrandProfileAttributesPaginationTraits<DerivedClient>>
  ListBrandProfileAttributesPaginator(const Model::ListBrandProfileAttributesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrandProfileAttributesRequest,
                                             Pagination::ListBrandProfileAttributesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBrandProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrandProfilesRequest,
                                    Pagination::ListBrandProfilesPaginationTraits<DerivedClient>>
  ListBrandProfilesPaginator(const Model::ListBrandProfilesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrandProfilesRequest,
                                             Pagination::ListBrandProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotifyCodeConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotifyCodeConfigurationsRequest,
                                    Pagination::ListNotifyCodeConfigurationsPaginationTraits<DerivedClient>>
  ListNotifyCodeConfigurationsPaginator(const Model::ListNotifyCodeConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotifyCodeConfigurationsRequest,
                                             Pagination::ListNotifyCodeConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegistrationsFromBrandProfile operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistrationsFromBrandProfileRequest,
                                    Pagination::ListRegistrationsFromBrandProfilePaginationTraits<DerivedClient>>
  ListRegistrationsFromBrandProfilePaginator(const Model::ListRegistrationsFromBrandProfileRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistrationsFromBrandProfileRequest,
                                             Pagination::ListRegistrationsFromBrandProfilePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EndUserMessaging
}  // namespace Aws

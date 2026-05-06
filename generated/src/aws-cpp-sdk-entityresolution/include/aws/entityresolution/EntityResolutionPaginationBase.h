/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/entityresolution/model/ListIdMappingJobsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdMappingWorkflowsPaginationTraits.h>
#include <aws/entityresolution/model/ListIdNamespacesPaginationTraits.h>
#include <aws/entityresolution/model/ListMatchingJobsPaginationTraits.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsPaginationTraits.h>
#include <aws/entityresolution/model/ListProviderServicesPaginationTraits.h>
#include <aws/entityresolution/model/ListSchemaMappingsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EntityResolution {

template <typename DerivedClient>
class EntityResolutionPaginationBase {
 public:
  /**
   * Create a paginator for ListIdMappingJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdMappingJobsRequest,
                                    Pagination::ListIdMappingJobsPaginationTraits<DerivedClient>>
  ListIdMappingJobsPaginator(const Model::ListIdMappingJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdMappingJobsRequest,
                                             Pagination::ListIdMappingJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdMappingWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdMappingWorkflowsRequest,
                                    Pagination::ListIdMappingWorkflowsPaginationTraits<DerivedClient>>
  ListIdMappingWorkflowsPaginator(const Model::ListIdMappingWorkflowsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdMappingWorkflowsRequest,
                                             Pagination::ListIdMappingWorkflowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdNamespacesRequest,
                                    Pagination::ListIdNamespacesPaginationTraits<DerivedClient>>
  ListIdNamespacesPaginator(const Model::ListIdNamespacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdNamespacesRequest,
                                             Pagination::ListIdNamespacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListMatchingJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMatchingJobsRequest,
                                    Pagination::ListMatchingJobsPaginationTraits<DerivedClient>>
  ListMatchingJobsPaginator(const Model::ListMatchingJobsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMatchingJobsRequest,
                                             Pagination::ListMatchingJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListMatchingWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMatchingWorkflowsRequest,
                                    Pagination::ListMatchingWorkflowsPaginationTraits<DerivedClient>>
  ListMatchingWorkflowsPaginator(const Model::ListMatchingWorkflowsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMatchingWorkflowsRequest,
                                             Pagination::ListMatchingWorkflowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProviderServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProviderServicesRequest,
                                    Pagination::ListProviderServicesPaginationTraits<DerivedClient>>
  ListProviderServicesPaginator(const Model::ListProviderServicesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProviderServicesRequest,
                                             Pagination::ListProviderServicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSchemaMappings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaMappingsRequest,
                                    Pagination::ListSchemaMappingsPaginationTraits<DerivedClient>>
  ListSchemaMappingsPaginator(const Model::ListSchemaMappingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaMappingsRequest,
                                             Pagination::ListSchemaMappingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EntityResolution
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/appintegrations/model/ListApplicationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListApplicationsPaginationTraits.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListDataIntegrationsPaginationTraits.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListEventIntegrationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AppIntegrationsService {

class AppIntegrationsServiceClient;

template <typename DerivedClient>
class AppIntegrationsServicePaginationBase {
 public:
  /**
   * Create a paginator for ListApplicationAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAssociationsRequest,
                                    Pagination::ListApplicationAssociationsPaginationTraits<DerivedClient>>
  ListApplicationAssociationsPaginator(const Model::ListApplicationAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationAssociationsRequest,
                                             Pagination::ListApplicationAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDataIntegrationAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationAssociationsRequest,
                                    Pagination::ListDataIntegrationAssociationsPaginationTraits<DerivedClient>>
  ListDataIntegrationAssociationsPaginator(const Model::ListDataIntegrationAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationAssociationsRequest,
                                             Pagination::ListDataIntegrationAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationsRequest,
                                    Pagination::ListDataIntegrationsPaginationTraits<DerivedClient>>
  ListDataIntegrationsPaginator(const Model::ListDataIntegrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIntegrationsRequest,
                                             Pagination::ListDataIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventIntegrationAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventIntegrationAssociationsRequest,
                                    Pagination::ListEventIntegrationAssociationsPaginationTraits<DerivedClient>>
  ListEventIntegrationAssociationsPaginator(const Model::ListEventIntegrationAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventIntegrationAssociationsRequest,
                                             Pagination::ListEventIntegrationAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventIntegrationsRequest,
                                    Pagination::ListEventIntegrationsPaginationTraits<DerivedClient>>
  ListEventIntegrationsPaginator(const Model::ListEventIntegrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventIntegrationsRequest,
                                             Pagination::ListEventIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AppIntegrationsService
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceClient.h>
#include <aws/appintegrations/model/ListApplicationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListApplicationsPaginationTraits.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListDataIntegrationsPaginationTraits.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListEventIntegrationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppIntegrationsService {

using ListApplicationAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AppIntegrationsServiceClient, Model::ListApplicationAssociationsRequest,
                                      Pagination::ListApplicationAssociationsPaginationTraits<AppIntegrationsServiceClient>>;
using ListApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<AppIntegrationsServiceClient, Model::ListApplicationsRequest,
                                      Pagination::ListApplicationsPaginationTraits<AppIntegrationsServiceClient>>;
using ListDataIntegrationAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AppIntegrationsServiceClient, Model::ListDataIntegrationAssociationsRequest,
                                      Pagination::ListDataIntegrationAssociationsPaginationTraits<AppIntegrationsServiceClient>>;
using ListDataIntegrationsPaginator =
    Aws::Utils::Pagination::Paginator<AppIntegrationsServiceClient, Model::ListDataIntegrationsRequest,
                                      Pagination::ListDataIntegrationsPaginationTraits<AppIntegrationsServiceClient>>;
using ListEventIntegrationAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AppIntegrationsServiceClient, Model::ListEventIntegrationAssociationsRequest,
                                      Pagination::ListEventIntegrationAssociationsPaginationTraits<AppIntegrationsServiceClient>>;
using ListEventIntegrationsPaginator =
    Aws::Utils::Pagination::Paginator<AppIntegrationsServiceClient, Model::ListEventIntegrationsRequest,
                                      Pagination::ListEventIntegrationsPaginationTraits<AppIntegrationsServiceClient>>;

}  // namespace AppIntegrationsService
}  // namespace Aws

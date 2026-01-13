/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/fis/model/ListActionsPaginationTraits.h>
#include <aws/fis/model/ListExperimentResolvedTargetsPaginationTraits.h>
#include <aws/fis/model/ListExperimentTemplatesPaginationTraits.h>
#include <aws/fis/model/ListExperimentsPaginationTraits.h>
#include <aws/fis/model/ListTargetAccountConfigurationsPaginationTraits.h>
#include <aws/fis/model/ListTargetResourceTypesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace FIS {

class FISClient;

template <typename DerivedClient>
class FISPaginationBase {
 public:
  /**
   * Create a paginator for ListActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest, Pagination::ListActionsPaginationTraits<DerivedClient>>
  ListActionsPaginator(const Model::ListActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest,
                                             Pagination::ListActionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListExperimentResolvedTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentResolvedTargetsRequest,
                                    Pagination::ListExperimentResolvedTargetsPaginationTraits<DerivedClient>>
  ListExperimentResolvedTargetsPaginator(const Model::ListExperimentResolvedTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentResolvedTargetsRequest,
                                             Pagination::ListExperimentResolvedTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExperiments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentsRequest,
                                    Pagination::ListExperimentsPaginationTraits<DerivedClient>>
  ListExperimentsPaginator(const Model::ListExperimentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentsRequest,
                                             Pagination::ListExperimentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListExperimentTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentTemplatesRequest,
                                    Pagination::ListExperimentTemplatesPaginationTraits<DerivedClient>>
  ListExperimentTemplatesPaginator(const Model::ListExperimentTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExperimentTemplatesRequest,
                                             Pagination::ListExperimentTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargetAccountConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetAccountConfigurationsRequest,
                                    Pagination::ListTargetAccountConfigurationsPaginationTraits<DerivedClient>>
  ListTargetAccountConfigurationsPaginator(const Model::ListTargetAccountConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetAccountConfigurationsRequest,
                                             Pagination::ListTargetAccountConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargetResourceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetResourceTypesRequest,
                                    Pagination::ListTargetResourceTypesPaginationTraits<DerivedClient>>
  ListTargetResourceTypesPaginator(const Model::ListTargetResourceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetResourceTypesRequest,
                                             Pagination::ListTargetResourceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace FIS
}  // namespace Aws

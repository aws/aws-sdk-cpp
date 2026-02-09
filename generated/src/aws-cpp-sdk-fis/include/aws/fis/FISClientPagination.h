/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/fis/FISClient.h>
#include <aws/fis/model/ListActionsPaginationTraits.h>
#include <aws/fis/model/ListExperimentResolvedTargetsPaginationTraits.h>
#include <aws/fis/model/ListExperimentTemplatesPaginationTraits.h>
#include <aws/fis/model/ListExperimentsPaginationTraits.h>
#include <aws/fis/model/ListTargetAccountConfigurationsPaginationTraits.h>
#include <aws/fis/model/ListTargetResourceTypesPaginationTraits.h>

namespace Aws {
namespace FIS {

using ListActionsPaginator =
    Aws::Utils::Pagination::Paginator<FISClient, Model::ListActionsRequest, Pagination::ListActionsPaginationTraits<FISClient>>;
using ListExperimentResolvedTargetsPaginator =
    Aws::Utils::Pagination::Paginator<FISClient, Model::ListExperimentResolvedTargetsRequest,
                                      Pagination::ListExperimentResolvedTargetsPaginationTraits<FISClient>>;
using ListExperimentsPaginator =
    Aws::Utils::Pagination::Paginator<FISClient, Model::ListExperimentsRequest, Pagination::ListExperimentsPaginationTraits<FISClient>>;
using ListExperimentTemplatesPaginator = Aws::Utils::Pagination::Paginator<FISClient, Model::ListExperimentTemplatesRequest,
                                                                           Pagination::ListExperimentTemplatesPaginationTraits<FISClient>>;
using ListTargetAccountConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<FISClient, Model::ListTargetAccountConfigurationsRequest,
                                      Pagination::ListTargetAccountConfigurationsPaginationTraits<FISClient>>;
using ListTargetResourceTypesPaginator = Aws::Utils::Pagination::Paginator<FISClient, Model::ListTargetResourceTypesRequest,
                                                                           Pagination::ListTargetResourceTypesPaginationTraits<FISClient>>;

}  // namespace FIS
}  // namespace Aws

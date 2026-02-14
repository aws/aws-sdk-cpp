/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/ComprehendClient.h>
#include <aws/comprehend/model/ListDatasetsPaginationTraits.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsPaginationTraits.h>
#include <aws/comprehend/model/ListDocumentClassifierSummariesPaginationTraits.h>
#include <aws/comprehend/model/ListDocumentClassifiersPaginationTraits.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListEndpointsPaginationTraits.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesPaginationTraits.h>
#include <aws/comprehend/model/ListEntityRecognizersPaginationTraits.h>
#include <aws/comprehend/model/ListEventsDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListFlywheelIterationHistoryPaginationTraits.h>
#include <aws/comprehend/model/ListFlywheelsPaginationTraits.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsPaginationTraits.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Comprehend {

using ListDatasetsPaginator = Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListDatasetsRequest,
                                                                Pagination::ListDatasetsPaginationTraits<ComprehendClient>>;
using ListDocumentClassificationJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListDocumentClassificationJobsRequest,
                                      Pagination::ListDocumentClassificationJobsPaginationTraits<ComprehendClient>>;
using ListDocumentClassifiersPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListDocumentClassifiersRequest,
                                      Pagination::ListDocumentClassifiersPaginationTraits<ComprehendClient>>;
using ListDocumentClassifierSummariesPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListDocumentClassifierSummariesRequest,
                                      Pagination::ListDocumentClassifierSummariesPaginationTraits<ComprehendClient>>;
using ListDominantLanguageDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListDominantLanguageDetectionJobsRequest,
                                      Pagination::ListDominantLanguageDetectionJobsPaginationTraits<ComprehendClient>>;
using ListEndpointsPaginator = Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListEndpointsRequest,
                                                                 Pagination::ListEndpointsPaginationTraits<ComprehendClient>>;
using ListEntitiesDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListEntitiesDetectionJobsRequest,
                                      Pagination::ListEntitiesDetectionJobsPaginationTraits<ComprehendClient>>;
using ListEntityRecognizersPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListEntityRecognizersRequest,
                                      Pagination::ListEntityRecognizersPaginationTraits<ComprehendClient>>;
using ListEntityRecognizerSummariesPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListEntityRecognizerSummariesRequest,
                                      Pagination::ListEntityRecognizerSummariesPaginationTraits<ComprehendClient>>;
using ListEventsDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListEventsDetectionJobsRequest,
                                      Pagination::ListEventsDetectionJobsPaginationTraits<ComprehendClient>>;
using ListFlywheelIterationHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListFlywheelIterationHistoryRequest,
                                      Pagination::ListFlywheelIterationHistoryPaginationTraits<ComprehendClient>>;
using ListFlywheelsPaginator = Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListFlywheelsRequest,
                                                                 Pagination::ListFlywheelsPaginationTraits<ComprehendClient>>;
using ListKeyPhrasesDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListKeyPhrasesDetectionJobsRequest,
                                      Pagination::ListKeyPhrasesDetectionJobsPaginationTraits<ComprehendClient>>;
using ListPiiEntitiesDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListPiiEntitiesDetectionJobsRequest,
                                      Pagination::ListPiiEntitiesDetectionJobsPaginationTraits<ComprehendClient>>;
using ListSentimentDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListSentimentDetectionJobsRequest,
                                      Pagination::ListSentimentDetectionJobsPaginationTraits<ComprehendClient>>;
using ListTargetedSentimentDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListTargetedSentimentDetectionJobsRequest,
                                      Pagination::ListTargetedSentimentDetectionJobsPaginationTraits<ComprehendClient>>;
using ListTopicsDetectionJobsPaginator =
    Aws::Utils::Pagination::Paginator<ComprehendClient, Model::ListTopicsDetectionJobsRequest,
                                      Pagination::ListTopicsDetectionJobsPaginationTraits<ComprehendClient>>;

}  // namespace Comprehend
}  // namespace Aws

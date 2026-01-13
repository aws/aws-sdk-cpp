/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace Comprehend {

class ComprehendClient;

template <typename DerivedClient>
class ComprehendPaginationBase {
 public:
  /**
   * Create a paginator for ListDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest, Pagination::ListDatasetsPaginationTraits<DerivedClient>>
  ListDatasetsPaginator(const Model::ListDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest,
                                             Pagination::ListDatasetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDocumentClassificationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentClassificationJobsRequest,
                                    Pagination::ListDocumentClassificationJobsPaginationTraits<DerivedClient>>
  ListDocumentClassificationJobsPaginator(const Model::ListDocumentClassificationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentClassificationJobsRequest,
                                             Pagination::ListDocumentClassificationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDocumentClassifiers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentClassifiersRequest,
                                    Pagination::ListDocumentClassifiersPaginationTraits<DerivedClient>>
  ListDocumentClassifiersPaginator(const Model::ListDocumentClassifiersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentClassifiersRequest,
                                             Pagination::ListDocumentClassifiersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDocumentClassifierSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentClassifierSummariesRequest,
                                    Pagination::ListDocumentClassifierSummariesPaginationTraits<DerivedClient>>
  ListDocumentClassifierSummariesPaginator(const Model::ListDocumentClassifierSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentClassifierSummariesRequest,
                                             Pagination::ListDocumentClassifierSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDominantLanguageDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDominantLanguageDetectionJobsRequest,
                                    Pagination::ListDominantLanguageDetectionJobsPaginationTraits<DerivedClient>>
  ListDominantLanguageDetectionJobsPaginator(const Model::ListDominantLanguageDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDominantLanguageDetectionJobsRequest,
                                             Pagination::ListDominantLanguageDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsRequest, Pagination::ListEndpointsPaginationTraits<DerivedClient>>
  ListEndpointsPaginator(const Model::ListEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsRequest,
                                             Pagination::ListEndpointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListEntitiesDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesDetectionJobsRequest,
                                    Pagination::ListEntitiesDetectionJobsPaginationTraits<DerivedClient>>
  ListEntitiesDetectionJobsPaginator(const Model::ListEntitiesDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesDetectionJobsRequest,
                                             Pagination::ListEntitiesDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntityRecognizers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityRecognizersRequest,
                                    Pagination::ListEntityRecognizersPaginationTraits<DerivedClient>>
  ListEntityRecognizersPaginator(const Model::ListEntityRecognizersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityRecognizersRequest,
                                             Pagination::ListEntityRecognizersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntityRecognizerSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityRecognizerSummariesRequest,
                                    Pagination::ListEntityRecognizerSummariesPaginationTraits<DerivedClient>>
  ListEntityRecognizerSummariesPaginator(const Model::ListEntityRecognizerSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityRecognizerSummariesRequest,
                                             Pagination::ListEntityRecognizerSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventsDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsDetectionJobsRequest,
                                    Pagination::ListEventsDetectionJobsPaginationTraits<DerivedClient>>
  ListEventsDetectionJobsPaginator(const Model::ListEventsDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsDetectionJobsRequest,
                                             Pagination::ListEventsDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlywheelIterationHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlywheelIterationHistoryRequest,
                                    Pagination::ListFlywheelIterationHistoryPaginationTraits<DerivedClient>>
  ListFlywheelIterationHistoryPaginator(const Model::ListFlywheelIterationHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlywheelIterationHistoryRequest,
                                             Pagination::ListFlywheelIterationHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFlywheels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlywheelsRequest, Pagination::ListFlywheelsPaginationTraits<DerivedClient>>
  ListFlywheelsPaginator(const Model::ListFlywheelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlywheelsRequest,
                                             Pagination::ListFlywheelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListKeyPhrasesDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyPhrasesDetectionJobsRequest,
                                    Pagination::ListKeyPhrasesDetectionJobsPaginationTraits<DerivedClient>>
  ListKeyPhrasesDetectionJobsPaginator(const Model::ListKeyPhrasesDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyPhrasesDetectionJobsRequest,
                                             Pagination::ListKeyPhrasesDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPiiEntitiesDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPiiEntitiesDetectionJobsRequest,
                                    Pagination::ListPiiEntitiesDetectionJobsPaginationTraits<DerivedClient>>
  ListPiiEntitiesDetectionJobsPaginator(const Model::ListPiiEntitiesDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPiiEntitiesDetectionJobsRequest,
                                             Pagination::ListPiiEntitiesDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSentimentDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSentimentDetectionJobsRequest,
                                    Pagination::ListSentimentDetectionJobsPaginationTraits<DerivedClient>>
  ListSentimentDetectionJobsPaginator(const Model::ListSentimentDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSentimentDetectionJobsRequest,
                                             Pagination::ListSentimentDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTargetedSentimentDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetedSentimentDetectionJobsRequest,
                                    Pagination::ListTargetedSentimentDetectionJobsPaginationTraits<DerivedClient>>
  ListTargetedSentimentDetectionJobsPaginator(const Model::ListTargetedSentimentDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetedSentimentDetectionJobsRequest,
                                             Pagination::ListTargetedSentimentDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTopicsDetectionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsDetectionJobsRequest,
                                    Pagination::ListTopicsDetectionJobsPaginationTraits<DerivedClient>>
  ListTopicsDetectionJobsPaginator(const Model::ListTopicsDetectionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsDetectionJobsRequest,
                                             Pagination::ListTopicsDetectionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Comprehend
}  // namespace Aws

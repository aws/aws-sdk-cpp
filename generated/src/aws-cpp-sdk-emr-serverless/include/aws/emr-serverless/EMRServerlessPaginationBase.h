/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/emr-serverless/model/ListApplicationsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EMRServerless {

class EMRServerlessClient;

template <typename DerivedClient>
class EMRServerlessPaginationBase {
 public:
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
   * Create a paginator for ListJobRunAttempts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunAttemptsRequest,
                                    Pagination::ListJobRunAttemptsPaginationTraits<DerivedClient>>
  ListJobRunAttemptsPaginator(const Model::ListJobRunAttemptsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunAttemptsRequest,
                                             Pagination::ListJobRunAttemptsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest, Pagination::ListJobRunsPaginationTraits<DerivedClient>>
  ListJobRunsPaginator(const Model::ListJobRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest,
                                             Pagination::ListJobRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace EMRServerless
}  // namespace Aws

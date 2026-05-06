/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/emr-serverless/model/ListApplicationsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunsPaginationTraits.h>
#include <aws/emr-serverless/model/ListSessionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EMRServerless {

template <typename DerivedClient>
class EMRServerlessPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunAttemptsRequest,
                                             Pagination::ListJobRunAttemptsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest, Pagination::ListJobRunsPaginationTraits<DerivedClient>>
  ListJobRunsPaginator(const Model::ListJobRunsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest,
                                             Pagination::ListJobRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace EMRServerless
}  // namespace Aws

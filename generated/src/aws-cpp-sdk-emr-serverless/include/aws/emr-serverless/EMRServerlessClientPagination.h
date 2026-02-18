/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/emr-serverless/EMRServerlessClient.h>
#include <aws/emr-serverless/model/ListApplicationsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunAttemptsPaginationTraits.h>
#include <aws/emr-serverless/model/ListJobRunsPaginationTraits.h>

namespace Aws {
namespace EMRServerless {

using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<EMRServerlessClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<EMRServerlessClient>>;
using ListJobRunAttemptsPaginator = Aws::Utils::Pagination::Paginator<EMRServerlessClient, Model::ListJobRunAttemptsRequest,
                                                                      Pagination::ListJobRunAttemptsPaginationTraits<EMRServerlessClient>>;
using ListJobRunsPaginator = Aws::Utils::Pagination::Paginator<EMRServerlessClient, Model::ListJobRunsRequest,
                                                               Pagination::ListJobRunsPaginationTraits<EMRServerlessClient>>;

}  // namespace EMRServerless
}  // namespace Aws

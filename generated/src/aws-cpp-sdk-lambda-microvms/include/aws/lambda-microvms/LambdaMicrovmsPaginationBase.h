/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LambdaMicrovms {

template <typename DerivedClient>
class LambdaMicrovmsPaginationBase {
 public:
  /**
   * Create a paginator for ListManagedMicrovmImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedMicrovmImagesRequest,
                                    Pagination::ListManagedMicrovmImagesPaginationTraits<DerivedClient>>
  ListManagedMicrovmImagesPaginator(const Model::ListManagedMicrovmImagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedMicrovmImagesRequest,
                                             Pagination::ListManagedMicrovmImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedMicrovmImageVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedMicrovmImageVersionsRequest,
                                    Pagination::ListManagedMicrovmImageVersionsPaginationTraits<DerivedClient>>
  ListManagedMicrovmImageVersionsPaginator(const Model::ListManagedMicrovmImageVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedMicrovmImageVersionsRequest,
                                             Pagination::ListManagedMicrovmImageVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrovmImageBuilds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmImageBuildsRequest,
                                    Pagination::ListMicrovmImageBuildsPaginationTraits<DerivedClient>>
  ListMicrovmImageBuildsPaginator(const Model::ListMicrovmImageBuildsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmImageBuildsRequest,
                                             Pagination::ListMicrovmImageBuildsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrovmImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmImagesRequest,
                                    Pagination::ListMicrovmImagesPaginationTraits<DerivedClient>>
  ListMicrovmImagesPaginator(const Model::ListMicrovmImagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmImagesRequest,
                                             Pagination::ListMicrovmImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrovmImageVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmImageVersionsRequest,
                                    Pagination::ListMicrovmImageVersionsPaginationTraits<DerivedClient>>
  ListMicrovmImageVersionsPaginator(const Model::ListMicrovmImageVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmImageVersionsRequest,
                                             Pagination::ListMicrovmImageVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMicrovms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmsRequest, Pagination::ListMicrovmsPaginationTraits<DerivedClient>>
  ListMicrovmsPaginator(const Model::ListMicrovmsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMicrovmsRequest,
                                             Pagination::ListMicrovmsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace LambdaMicrovms
}  // namespace Aws

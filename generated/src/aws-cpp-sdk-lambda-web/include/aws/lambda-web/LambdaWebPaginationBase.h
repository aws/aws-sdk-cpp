/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LambdaWeb {

template <typename DerivedClient>
class LambdaWebPaginationBase {
 public:
  /**
   * Create a paginator for ListWebFunctionEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebFunctionEndpointsRequest,
                                    Pagination::ListWebFunctionEndpointsPaginationTraits<DerivedClient>>
  ListWebFunctionEndpointsPaginator(const Model::ListWebFunctionEndpointsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebFunctionEndpointsRequest,
                                             Pagination::ListWebFunctionEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWebFunctionRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebFunctionRevisionsRequest,
                                    Pagination::ListWebFunctionRevisionsPaginationTraits<DerivedClient>>
  ListWebFunctionRevisionsPaginator(const Model::ListWebFunctionRevisionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebFunctionRevisionsRequest,
                                             Pagination::ListWebFunctionRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWebFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebFunctionsRequest,
                                    Pagination::ListWebFunctionsPaginationTraits<DerivedClient>>
  ListWebFunctionsPaginator(const Model::ListWebFunctionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebFunctionsRequest,
                                             Pagination::ListWebFunctionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace LambdaWeb
}  // namespace Aws

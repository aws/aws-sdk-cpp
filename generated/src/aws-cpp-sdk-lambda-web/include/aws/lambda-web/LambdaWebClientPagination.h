/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-web/LambdaWebClient.h>
#include <aws/lambda-web/model/ListWebFunctionEndpointsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionRevisionsPaginationTraits.h>
#include <aws/lambda-web/model/ListWebFunctionsPaginationTraits.h>

namespace Aws {
namespace LambdaWeb {

using ListWebFunctionEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaWebClient, Model::ListWebFunctionEndpointsRequest,
                                      Pagination::ListWebFunctionEndpointsPaginationTraits<LambdaWebClient>>;
using ListWebFunctionRevisionsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaWebClient, Model::ListWebFunctionRevisionsRequest,
                                      Pagination::ListWebFunctionRevisionsPaginationTraits<LambdaWebClient>>;
using ListWebFunctionsPaginator = Aws::Utils::Pagination::Paginator<LambdaWebClient, Model::ListWebFunctionsRequest,
                                                                    Pagination::ListWebFunctionsPaginationTraits<LambdaWebClient>>;

}  // namespace LambdaWeb
}  // namespace Aws

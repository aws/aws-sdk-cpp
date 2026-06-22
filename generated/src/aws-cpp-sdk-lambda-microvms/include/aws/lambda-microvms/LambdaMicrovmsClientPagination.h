/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lambda-microvms/LambdaMicrovmsClient.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImagesPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImageVersionsPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmImagesPaginationTraits.h>
#include <aws/lambda-microvms/model/ListMicrovmsPaginationTraits.h>

namespace Aws {
namespace LambdaMicrovms {

using ListManagedMicrovmImagesPaginator =
    Aws::Utils::Pagination::Paginator<LambdaMicrovmsClient, Model::ListManagedMicrovmImagesRequest,
                                      Pagination::ListManagedMicrovmImagesPaginationTraits<LambdaMicrovmsClient>>;
using ListManagedMicrovmImageVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaMicrovmsClient, Model::ListManagedMicrovmImageVersionsRequest,
                                      Pagination::ListManagedMicrovmImageVersionsPaginationTraits<LambdaMicrovmsClient>>;
using ListMicrovmImageBuildsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaMicrovmsClient, Model::ListMicrovmImageBuildsRequest,
                                      Pagination::ListMicrovmImageBuildsPaginationTraits<LambdaMicrovmsClient>>;
using ListMicrovmImagesPaginator = Aws::Utils::Pagination::Paginator<LambdaMicrovmsClient, Model::ListMicrovmImagesRequest,
                                                                     Pagination::ListMicrovmImagesPaginationTraits<LambdaMicrovmsClient>>;
using ListMicrovmImageVersionsPaginator =
    Aws::Utils::Pagination::Paginator<LambdaMicrovmsClient, Model::ListMicrovmImageVersionsRequest,
                                      Pagination::ListMicrovmImageVersionsPaginationTraits<LambdaMicrovmsClient>>;
using ListMicrovmsPaginator = Aws::Utils::Pagination::Paginator<LambdaMicrovmsClient, Model::ListMicrovmsRequest,
                                                                Pagination::ListMicrovmsPaginationTraits<LambdaMicrovmsClient>>;

}  // namespace LambdaMicrovms
}  // namespace Aws

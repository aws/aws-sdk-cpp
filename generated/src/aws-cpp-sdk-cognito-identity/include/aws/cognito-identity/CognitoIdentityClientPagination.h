/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/model/ListIdentityPoolsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CognitoIdentity {

using ListIdentityPoolsPaginator = Aws::Utils::Pagination::Paginator<CognitoIdentityClient, Model::ListIdentityPoolsRequest,
                                                                     Pagination::ListIdentityPoolsPaginationTraits<CognitoIdentityClient>>;

}  // namespace CognitoIdentity
}  // namespace Aws

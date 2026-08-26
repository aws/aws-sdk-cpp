/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iam-toolbox/IAMToolboxClient.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsPaginationTraits.h>

namespace Aws {
namespace IAMToolbox {

using GetRequestAuthorizationDetailsPaginator =
    Aws::Utils::Pagination::Paginator<IAMToolboxClient, Model::GetRequestAuthorizationDetailsRequest,
                                      Pagination::GetRequestAuthorizationDetailsPaginationTraits<IAMToolboxClient>>;

}  // namespace IAMToolbox
}  // namespace Aws

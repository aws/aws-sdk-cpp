/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/endusermessaging/EndUserMessagingClient.h>
#include <aws/endusermessaging/model/ListBrandProfileAttributesPaginationTraits.h>
#include <aws/endusermessaging/model/ListBrandProfilesPaginationTraits.h>
#include <aws/endusermessaging/model/ListJobsPaginationTraits.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsPaginationTraits.h>
#include <aws/endusermessaging/model/ListRegistrationsFromBrandProfilePaginationTraits.h>

namespace Aws {
namespace EndUserMessaging {

using ListBrandProfileAttributesPaginator =
    Aws::Utils::Pagination::Paginator<EndUserMessagingClient, Model::ListBrandProfileAttributesRequest,
                                      Pagination::ListBrandProfileAttributesPaginationTraits<EndUserMessagingClient>>;
using ListBrandProfilesPaginator = Aws::Utils::Pagination::Paginator<EndUserMessagingClient, Model::ListBrandProfilesRequest,
                                                                     Pagination::ListBrandProfilesPaginationTraits<EndUserMessagingClient>>;
using ListJobsPaginator = Aws::Utils::Pagination::Paginator<EndUserMessagingClient, Model::ListJobsRequest,
                                                            Pagination::ListJobsPaginationTraits<EndUserMessagingClient>>;
using ListNotifyCodeConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<EndUserMessagingClient, Model::ListNotifyCodeConfigurationsRequest,
                                      Pagination::ListNotifyCodeConfigurationsPaginationTraits<EndUserMessagingClient>>;
using ListRegistrationsFromBrandProfilePaginator =
    Aws::Utils::Pagination::Paginator<EndUserMessagingClient, Model::ListRegistrationsFromBrandProfileRequest,
                                      Pagination::ListRegistrationsFromBrandProfilePaginationTraits<EndUserMessagingClient>>;

}  // namespace EndUserMessaging
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGatewayClient.h>
#include <aws/backup-gateway/model/ListGatewaysPaginationTraits.h>
#include <aws/backup-gateway/model/ListHypervisorsPaginationTraits.h>
#include <aws/backup-gateway/model/ListVirtualMachinesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BackupGateway {

using ListGatewaysPaginator = Aws::Utils::Pagination::Paginator<BackupGatewayClient, Model::ListGatewaysRequest,
                                                                Pagination::ListGatewaysPaginationTraits<BackupGatewayClient>>;
using ListHypervisorsPaginator = Aws::Utils::Pagination::Paginator<BackupGatewayClient, Model::ListHypervisorsRequest,
                                                                   Pagination::ListHypervisorsPaginationTraits<BackupGatewayClient>>;
using ListVirtualMachinesPaginator =
    Aws::Utils::Pagination::Paginator<BackupGatewayClient, Model::ListVirtualMachinesRequest,
                                      Pagination::ListVirtualMachinesPaginationTraits<BackupGatewayClient>>;

}  // namespace BackupGateway
}  // namespace Aws

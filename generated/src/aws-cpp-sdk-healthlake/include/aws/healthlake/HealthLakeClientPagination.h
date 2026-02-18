/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/healthlake/HealthLakeClient.h>
#include <aws/healthlake/model/ListFHIRDatastoresPaginationTraits.h>
#include <aws/healthlake/model/ListFHIRExportJobsPaginationTraits.h>
#include <aws/healthlake/model/ListFHIRImportJobsPaginationTraits.h>

namespace Aws {
namespace HealthLake {

using ListFHIRDatastoresPaginator = Aws::Utils::Pagination::Paginator<HealthLakeClient, Model::ListFHIRDatastoresRequest,
                                                                      Pagination::ListFHIRDatastoresPaginationTraits<HealthLakeClient>>;
using ListFHIRExportJobsPaginator = Aws::Utils::Pagination::Paginator<HealthLakeClient, Model::ListFHIRExportJobsRequest,
                                                                      Pagination::ListFHIRExportJobsPaginationTraits<HealthLakeClient>>;
using ListFHIRImportJobsPaginator = Aws::Utils::Pagination::Paginator<HealthLakeClient, Model::ListFHIRImportJobsRequest,
                                                                      Pagination::ListFHIRImportJobsPaginationTraits<HealthLakeClient>>;

}  // namespace HealthLake
}  // namespace Aws

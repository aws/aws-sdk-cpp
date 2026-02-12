/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilderClient.h>
#include <aws/amplifyuibuilder/model/ExportComponentsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ExportFormsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ExportThemesPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListCodegenJobsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListComponentsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListFormsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListThemesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AmplifyUIBuilder {

using ExportComponentsPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ExportComponentsRequest,
                                                                    Pagination::ExportComponentsPaginationTraits<AmplifyUIBuilderClient>>;
using ExportFormsPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ExportFormsRequest,
                                                               Pagination::ExportFormsPaginationTraits<AmplifyUIBuilderClient>>;
using ExportThemesPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ExportThemesRequest,
                                                                Pagination::ExportThemesPaginationTraits<AmplifyUIBuilderClient>>;
using ListCodegenJobsPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ListCodegenJobsRequest,
                                                                   Pagination::ListCodegenJobsPaginationTraits<AmplifyUIBuilderClient>>;
using ListComponentsPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ListComponentsRequest,
                                                                  Pagination::ListComponentsPaginationTraits<AmplifyUIBuilderClient>>;
using ListFormsPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ListFormsRequest,
                                                             Pagination::ListFormsPaginationTraits<AmplifyUIBuilderClient>>;
using ListThemesPaginator = Aws::Utils::Pagination::Paginator<AmplifyUIBuilderClient, Model::ListThemesRequest,
                                                              Pagination::ListThemesPaginationTraits<AmplifyUIBuilderClient>>;

}  // namespace AmplifyUIBuilder
}  // namespace Aws

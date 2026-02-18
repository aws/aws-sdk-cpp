/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/amplifyuibuilder/model/ExportComponentsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ExportFormsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ExportThemesPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListCodegenJobsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListComponentsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListFormsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListThemesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AmplifyUIBuilder {

class AmplifyUIBuilderClient;

template <typename DerivedClient>
class AmplifyUIBuilderPaginationBase {
 public:
  /**
   * Create a paginator for ExportComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExportComponentsRequest,
                                    Pagination::ExportComponentsPaginationTraits<DerivedClient>>
  ExportComponentsPaginator(const Model::ExportComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExportComponentsRequest,
                                             Pagination::ExportComponentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ExportForms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExportFormsRequest, Pagination::ExportFormsPaginationTraits<DerivedClient>>
  ExportFormsPaginator(const Model::ExportFormsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExportFormsRequest,
                                             Pagination::ExportFormsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ExportThemes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExportThemesRequest, Pagination::ExportThemesPaginationTraits<DerivedClient>>
  ExportThemesPaginator(const Model::ExportThemesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ExportThemesRequest,
                                             Pagination::ExportThemesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCodegenJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodegenJobsRequest,
                                    Pagination::ListCodegenJobsPaginationTraits<DerivedClient>>
  ListCodegenJobsPaginator(const Model::ListCodegenJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodegenJobsRequest,
                                             Pagination::ListCodegenJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest, Pagination::ListComponentsPaginationTraits<DerivedClient>>
  ListComponentsPaginator(const Model::ListComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest,
                                             Pagination::ListComponentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListForms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFormsRequest, Pagination::ListFormsPaginationTraits<DerivedClient>>
  ListFormsPaginator(const Model::ListFormsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFormsRequest, Pagination::ListFormsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThemes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThemesRequest, Pagination::ListThemesPaginationTraits<DerivedClient>>
  ListThemesPaginator(const Model::ListThemesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThemesRequest,
                                             Pagination::ListThemesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace AmplifyUIBuilder
}  // namespace Aws

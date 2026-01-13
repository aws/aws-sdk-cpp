/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/invoicing/model/ListInvoiceSummariesPaginationTraits.h>
#include <aws/invoicing/model/ListInvoiceUnitsPaginationTraits.h>
#include <aws/invoicing/model/ListProcurementPortalPreferencesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Invoicing {

class InvoicingClient;

template <typename DerivedClient>
class InvoicingPaginationBase {
 public:
  /**
   * Create a paginator for ListInvoiceSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvoiceSummariesRequest,
                                    Pagination::ListInvoiceSummariesPaginationTraits<DerivedClient>>
  ListInvoiceSummariesPaginator(const Model::ListInvoiceSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvoiceSummariesRequest,
                                             Pagination::ListInvoiceSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInvoiceUnits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvoiceUnitsRequest,
                                    Pagination::ListInvoiceUnitsPaginationTraits<DerivedClient>>
  ListInvoiceUnitsPaginator(const Model::ListInvoiceUnitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvoiceUnitsRequest,
                                             Pagination::ListInvoiceUnitsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProcurementPortalPreferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProcurementPortalPreferencesRequest,
                                    Pagination::ListProcurementPortalPreferencesPaginationTraits<DerivedClient>>
  ListProcurementPortalPreferencesPaginator(const Model::ListProcurementPortalPreferencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProcurementPortalPreferencesRequest,
                                             Pagination::ListProcurementPortalPreferencesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Invoicing
}  // namespace Aws

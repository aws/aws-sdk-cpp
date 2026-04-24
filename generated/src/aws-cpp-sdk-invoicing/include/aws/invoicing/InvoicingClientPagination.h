/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/invoicing/InvoicingClient.h>
#include <aws/invoicing/model/ListInvoiceSummariesPaginationTraits.h>
#include <aws/invoicing/model/ListInvoiceUnitsPaginationTraits.h>
#include <aws/invoicing/model/ListProcurementPortalPreferencesPaginationTraits.h>

namespace Aws {
namespace Invoicing {

using ListInvoiceSummariesPaginator = Aws::Utils::Pagination::Paginator<InvoicingClient, Model::ListInvoiceSummariesRequest,
                                                                        Pagination::ListInvoiceSummariesPaginationTraits<InvoicingClient>>;
using ListInvoiceUnitsPaginator = Aws::Utils::Pagination::Paginator<InvoicingClient, Model::ListInvoiceUnitsRequest,
                                                                    Pagination::ListInvoiceUnitsPaginationTraits<InvoicingClient>>;
using ListProcurementPortalPreferencesPaginator =
    Aws::Utils::Pagination::Paginator<InvoicingClient, Model::ListProcurementPortalPreferencesRequest,
                                      Pagination::ListProcurementPortalPreferencesPaginationTraits<InvoicingClient>>;

}  // namespace Invoicing
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Invoicing
{
namespace Model
{
  enum class ListInvoiceSummariesResourceType
  {
    NOT_SET,
    ACCOUNT_ID,
    INVOICE_ID
  };

namespace ListInvoiceSummariesResourceTypeMapper
{
AWS_INVOICING_API ListInvoiceSummariesResourceType GetListInvoiceSummariesResourceTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForListInvoiceSummariesResourceType(ListInvoiceSummariesResourceType value);
} // namespace ListInvoiceSummariesResourceTypeMapper
} // namespace Model
} // namespace Invoicing
} // namespace Aws

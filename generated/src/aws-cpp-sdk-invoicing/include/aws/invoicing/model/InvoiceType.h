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
  enum class InvoiceType
  {
    NOT_SET,
    INVOICE,
    CREDIT_MEMO
  };

namespace InvoiceTypeMapper
{
AWS_INVOICING_API InvoiceType GetInvoiceTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForInvoiceType(InvoiceType value);
} // namespace InvoiceTypeMapper
} // namespace Model
} // namespace Invoicing
} // namespace Aws

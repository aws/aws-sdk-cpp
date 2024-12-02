/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/invoicing/InvoicingErrorMarshaller.h>
#include <aws/invoicing/InvoicingErrors.h>

using namespace Aws::Client;
using namespace Aws::Invoicing;

AWSError<CoreErrors> InvoicingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = InvoicingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/importexport/ImportExportErrorMarshaller.h>
#include <aws/importexport/ImportExportErrors.h>

using namespace Aws::Client;
using namespace Aws::ImportExport;

AWSError<CoreErrors> ImportExportErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ImportExportErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
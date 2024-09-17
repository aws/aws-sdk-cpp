/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/controlcatalog/ControlCatalogErrorMarshaller.h>
#include <aws/controlcatalog/ControlCatalogErrors.h>

using namespace Aws::Client;
using namespace Aws::ControlCatalog;

AWSError<CoreErrors> ControlCatalogErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ControlCatalogErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
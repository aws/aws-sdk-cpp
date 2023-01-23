/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/license-manager/LicenseManagerErrorMarshaller.h>
#include <aws/license-manager/LicenseManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::LicenseManager;

AWSError<CoreErrors> LicenseManagerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LicenseManagerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
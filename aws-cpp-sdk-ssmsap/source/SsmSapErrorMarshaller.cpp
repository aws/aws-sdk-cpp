/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ssmsap/SsmSapErrorMarshaller.h>
#include <aws/ssmsap/SsmSapErrors.h>

using namespace Aws::Client;
using namespace Aws::SsmSap;

AWSError<CoreErrors> SsmSapErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SsmSapErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
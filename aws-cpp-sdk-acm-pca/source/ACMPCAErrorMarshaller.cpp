/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/acm-pca/ACMPCAErrorMarshaller.h>
#include <aws/acm-pca/ACMPCAErrors.h>

using namespace Aws::Client;
using namespace Aws::ACMPCA;

AWSError<CoreErrors> ACMPCAErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ACMPCAErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
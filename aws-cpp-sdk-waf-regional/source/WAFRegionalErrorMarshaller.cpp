/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/waf-regional/WAFRegionalErrorMarshaller.h>
#include <aws/waf-regional/WAFRegionalErrors.h>

using namespace Aws::Client;
using namespace Aws::WAFRegional;

AWSError<CoreErrors> WAFRegionalErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WAFRegionalErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
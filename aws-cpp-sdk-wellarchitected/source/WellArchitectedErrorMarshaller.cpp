/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/wellarchitected/WellArchitectedErrorMarshaller.h>
#include <aws/wellarchitected/WellArchitectedErrors.h>

using namespace Aws::Client;
using namespace Aws::WellArchitected;

AWSError<CoreErrors> WellArchitectedErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = WellArchitectedErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
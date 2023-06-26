/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/macie2/Macie2ErrorMarshaller.h>
#include <aws/macie2/Macie2Errors.h>

using namespace Aws::Client;
using namespace Aws::Macie2;

AWSError<CoreErrors> Macie2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Macie2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
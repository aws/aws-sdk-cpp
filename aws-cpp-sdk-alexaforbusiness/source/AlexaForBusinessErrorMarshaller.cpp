/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrorMarshaller.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>

using namespace Aws::Client;
using namespace Aws::AlexaForBusiness;

AWSError<CoreErrors> AlexaForBusinessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AlexaForBusinessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/personalize/PersonalizeErrorMarshaller.h>
#include <aws/personalize/PersonalizeErrors.h>

using namespace Aws::Client;
using namespace Aws::Personalize;

AWSError<CoreErrors> PersonalizeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PersonalizeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
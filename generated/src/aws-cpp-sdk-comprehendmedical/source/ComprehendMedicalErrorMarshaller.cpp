/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/comprehendmedical/ComprehendMedicalErrorMarshaller.h>
#include <aws/comprehendmedical/ComprehendMedicalErrors.h>

using namespace Aws::Client;
using namespace Aws::ComprehendMedical;

AWSError<CoreErrors> ComprehendMedicalErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ComprehendMedicalErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
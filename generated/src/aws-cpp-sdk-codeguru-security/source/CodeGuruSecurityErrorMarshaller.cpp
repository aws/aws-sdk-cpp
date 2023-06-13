/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/codeguru-security/CodeGuruSecurityErrorMarshaller.h>
#include <aws/codeguru-security/CodeGuruSecurityErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeGuruSecurity;

AWSError<CoreErrors> CodeGuruSecurityErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CodeGuruSecurityErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
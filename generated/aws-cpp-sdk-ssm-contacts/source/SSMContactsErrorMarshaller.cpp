/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ssm-contacts/SSMContactsErrorMarshaller.h>
#include <aws/ssm-contacts/SSMContactsErrors.h>

using namespace Aws::Client;
using namespace Aws::SSMContacts;

AWSError<CoreErrors> SSMContactsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SSMContactsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
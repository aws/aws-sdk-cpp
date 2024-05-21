/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mailmanager/MailManagerErrorMarshaller.h>
#include <aws/mailmanager/MailManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::MailManager;

AWSError<CoreErrors> MailManagerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MailManagerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
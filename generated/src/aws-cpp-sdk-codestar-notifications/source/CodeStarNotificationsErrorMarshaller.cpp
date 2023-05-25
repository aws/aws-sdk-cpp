/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrorMarshaller.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeStarNotifications;

AWSError<CoreErrors> CodeStarNotificationsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CodeStarNotificationsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/APIPortalErrorMarshaller.h>
#include <aws/apiportal/APIPortalErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::APIPortal;

AWSError<CoreErrors> APIPortalErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = APIPortalErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
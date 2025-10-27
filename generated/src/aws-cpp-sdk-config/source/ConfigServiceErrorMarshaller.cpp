/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/ConfigServiceErrorMarshaller.h>
#include <aws/config/ConfigServiceErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ConfigService;

AWSError<CoreErrors> ConfigServiceErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ConfigServiceErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
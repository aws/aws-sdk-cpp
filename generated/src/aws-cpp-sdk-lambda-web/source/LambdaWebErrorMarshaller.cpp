/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lambda-web/LambdaWebErrorMarshaller.h>
#include <aws/lambda-web/LambdaWebErrors.h>

using namespace Aws::Client;
using namespace Aws::LambdaWeb;

AWSError<CoreErrors> LambdaWebErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = LambdaWebErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
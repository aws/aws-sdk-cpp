/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrorMarshaller.h>
#include <aws/lambda-microvms/LambdaMicrovmsErrors.h>

using namespace Aws::Client;
using namespace Aws::LambdaMicrovms;

AWSError<CoreErrors> LambdaMicrovmsErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = LambdaMicrovmsErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
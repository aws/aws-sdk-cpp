/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iam-toolbox/IAMToolboxErrorMarshaller.h>
#include <aws/iam-toolbox/IAMToolboxErrors.h>

using namespace Aws::Client;
using namespace Aws::IAMToolbox;

AWSError<CoreErrors> IAMToolboxErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = IAMToolboxErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
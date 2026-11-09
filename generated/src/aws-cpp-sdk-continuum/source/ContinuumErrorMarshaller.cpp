/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/ContinuumErrorMarshaller.h>
#include <aws/continuum/ContinuumErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::Continuum;

AWSError<CoreErrors> ContinuumErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ContinuumErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
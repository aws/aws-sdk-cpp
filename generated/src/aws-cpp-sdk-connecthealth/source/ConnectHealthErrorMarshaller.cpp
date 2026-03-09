/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/ConnectHealthErrorMarshaller.h>
#include <aws/connecthealth/ConnectHealthErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ConnectHealth;

AWSError<CoreErrors> ConnectHealthErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ConnectHealthErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
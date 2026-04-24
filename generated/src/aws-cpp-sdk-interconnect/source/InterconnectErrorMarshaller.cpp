/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/interconnect/InterconnectErrorMarshaller.h>
#include <aws/interconnect/InterconnectErrors.h>

using namespace Aws::Client;
using namespace Aws::Interconnect;

AWSError<CoreErrors> InterconnectErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = InterconnectErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
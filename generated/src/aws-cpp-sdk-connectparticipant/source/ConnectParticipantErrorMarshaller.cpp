/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/ConnectParticipantErrorMarshaller.h>
#include <aws/connectparticipant/ConnectParticipantErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ConnectParticipant;

AWSError<CoreErrors> ConnectParticipantErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ConnectParticipantErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
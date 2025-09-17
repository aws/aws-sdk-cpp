/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ec2-protocol/EC2ProtocolErrorMarshaller.h>
#include <aws/ec2-protocol/EC2ProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::EC2Protocol;

AWSError<CoreErrors> EC2ProtocolErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = EC2ProtocolErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
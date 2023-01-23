/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrorMarshaller.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::EC2InstanceConnect;

AWSError<CoreErrors> EC2InstanceConnectErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EC2InstanceConnectErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
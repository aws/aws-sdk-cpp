/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/networkmanager/NetworkManagerErrorMarshaller.h>
#include <aws/networkmanager/NetworkManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::NetworkManager;

AWSError<CoreErrors> NetworkManagerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = NetworkManagerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
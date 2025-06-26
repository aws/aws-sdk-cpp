/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/keyspacesstreams/KeyspacesStreamsErrorMarshaller.h>
#include <aws/keyspacesstreams/KeyspacesStreamsErrors.h>

using namespace Aws::Client;
using namespace Aws::KeyspacesStreams;

AWSError<CoreErrors> KeyspacesStreamsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KeyspacesStreamsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
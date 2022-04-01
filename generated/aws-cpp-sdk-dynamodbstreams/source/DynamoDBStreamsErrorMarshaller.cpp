/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrorMarshaller.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrors.h>

using namespace Aws::Client;
using namespace Aws::DynamoDBStreams;

AWSError<CoreErrors> DynamoDBStreamsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DynamoDBStreamsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
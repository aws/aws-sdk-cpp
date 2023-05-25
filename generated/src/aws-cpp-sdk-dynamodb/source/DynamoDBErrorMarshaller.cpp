/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/dynamodb/DynamoDBErrorMarshaller.h>
#include <aws/dynamodb/DynamoDBErrors.h>

using namespace Aws::Client;
using namespace Aws::DynamoDB;

AWSError<CoreErrors> DynamoDBErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DynamoDBErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
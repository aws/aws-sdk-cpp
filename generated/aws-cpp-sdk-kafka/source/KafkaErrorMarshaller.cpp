/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/kafka/KafkaErrorMarshaller.h>
#include <aws/kafka/KafkaErrors.h>

using namespace Aws::Client;
using namespace Aws::Kafka;

AWSError<CoreErrors> KafkaErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KafkaErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
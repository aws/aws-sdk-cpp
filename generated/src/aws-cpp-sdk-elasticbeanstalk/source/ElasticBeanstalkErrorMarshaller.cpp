/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrorMarshaller.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticBeanstalk;

AWSError<CoreErrors> ElasticBeanstalkErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ElasticBeanstalkErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
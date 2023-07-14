/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancing;

AWSError<CoreErrors> ElasticLoadBalancingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ElasticLoadBalancingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
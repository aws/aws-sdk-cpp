/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ErrorMarshaller.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Errors.h>

using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancingv2;

AWSError<CoreErrors> ElasticLoadBalancingv2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ElasticLoadBalancingv2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
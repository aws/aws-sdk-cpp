/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/route53resolver/Route53ResolverErrorMarshaller.h>
#include <aws/route53resolver/Route53ResolverErrors.h>

using namespace Aws::Client;
using namespace Aws::Route53Resolver;

AWSError<CoreErrors> Route53ResolverErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Route53ResolverErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
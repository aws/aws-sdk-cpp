/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/route53domains/Route53DomainsErrorMarshaller.h>
#include <aws/route53domains/Route53DomainsErrors.h>

using namespace Aws::Client;
using namespace Aws::Route53Domains;

AWSError<CoreErrors> Route53DomainsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Route53DomainsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
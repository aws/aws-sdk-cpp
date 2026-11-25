/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elb-proxy/ELBProxyErrorMarshaller.h>
#include <aws/elb-proxy/ELBProxyErrors.h>

using namespace Aws::Client;
using namespace Aws::ELBProxy;

AWSError<CoreErrors> ELBProxyErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ELBProxyErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
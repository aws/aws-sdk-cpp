/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/PrometheusServiceErrorMarshaller.h>
#include <aws/amp/PrometheusServiceErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::PrometheusService;

AWSError<CoreErrors> PrometheusServiceErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = PrometheusServiceErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsErrorMarshaller.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsErrors.h>

using namespace Aws::Client;
using namespace Aws::BCMRecommendedActions;

AWSError<CoreErrors> BCMRecommendedActionsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BCMRecommendedActionsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
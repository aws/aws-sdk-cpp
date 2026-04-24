/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/CostExplorerErrorMarshaller.h>
#include <aws/ce/CostExplorerErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::CostExplorer;

AWSError<CoreErrors> CostExplorerErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = CostExplorerErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
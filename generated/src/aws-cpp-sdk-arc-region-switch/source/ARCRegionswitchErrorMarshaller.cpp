﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/ARCRegionswitchErrorMarshaller.h>
#include <aws/arc-region-switch/ARCRegionswitchErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ARCRegionswitch;

AWSError<CoreErrors> ARCRegionswitchErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ARCRegionswitchErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
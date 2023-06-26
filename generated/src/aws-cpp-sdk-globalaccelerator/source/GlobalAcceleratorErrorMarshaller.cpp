/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrorMarshaller.h>
#include <aws/globalaccelerator/GlobalAcceleratorErrors.h>

using namespace Aws::Client;
using namespace Aws::GlobalAccelerator;

AWSError<CoreErrors> GlobalAcceleratorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GlobalAcceleratorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
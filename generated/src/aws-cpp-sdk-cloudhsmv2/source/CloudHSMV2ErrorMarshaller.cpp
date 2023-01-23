/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudhsmv2/CloudHSMV2ErrorMarshaller.h>
#include <aws/cloudhsmv2/CloudHSMV2Errors.h>

using namespace Aws::Client;
using namespace Aws::CloudHSMV2;

AWSError<CoreErrors> CloudHSMV2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudHSMV2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
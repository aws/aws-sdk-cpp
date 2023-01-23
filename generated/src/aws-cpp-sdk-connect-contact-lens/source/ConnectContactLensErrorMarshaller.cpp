/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/connect-contact-lens/ConnectContactLensErrorMarshaller.h>
#include <aws/connect-contact-lens/ConnectContactLensErrors.h>

using namespace Aws::Client;
using namespace Aws::ConnectContactLens;

AWSError<CoreErrors> ConnectContactLensErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ConnectContactLensErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
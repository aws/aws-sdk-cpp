/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrorMarshaller.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrors.h>

using namespace Aws::Client;
using namespace Aws::AmplifyUIBuilder;

AWSError<CoreErrors> AmplifyUIBuilderErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AmplifyUIBuilderErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
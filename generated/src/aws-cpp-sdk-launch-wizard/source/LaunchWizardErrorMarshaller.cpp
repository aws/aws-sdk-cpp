/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/launch-wizard/LaunchWizardErrorMarshaller.h>
#include <aws/launch-wizard/LaunchWizardErrors.h>

using namespace Aws::Client;
using namespace Aws::LaunchWizard;

AWSError<CoreErrors> LaunchWizardErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LaunchWizardErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
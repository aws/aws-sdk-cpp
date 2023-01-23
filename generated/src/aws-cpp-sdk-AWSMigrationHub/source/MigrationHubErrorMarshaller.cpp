/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/AWSMigrationHub/MigrationHubErrorMarshaller.h>
#include <aws/AWSMigrationHub/MigrationHubErrors.h>

using namespace Aws::Client;
using namespace Aws::MigrationHub;

AWSError<CoreErrors> MigrationHubErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MigrationHubErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
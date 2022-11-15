/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrorMarshaller.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrors.h>

using namespace Aws::Client;
using namespace Aws::MigrationHubOrchestrator;

AWSError<CoreErrors> MigrationHubOrchestratorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MigrationHubOrchestratorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
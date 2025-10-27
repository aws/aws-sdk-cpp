/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/CodeCommitErrorMarshaller.h>
#include <aws/codecommit/CodeCommitErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::CodeCommit;

AWSError<CoreErrors> CodeCommitErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = CodeCommitErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
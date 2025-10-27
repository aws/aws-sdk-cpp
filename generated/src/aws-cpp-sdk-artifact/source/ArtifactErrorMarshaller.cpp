/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/ArtifactErrorMarshaller.h>
#include <aws/artifact/ArtifactErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::Artifact;

AWSError<CoreErrors> ArtifactErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ArtifactErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
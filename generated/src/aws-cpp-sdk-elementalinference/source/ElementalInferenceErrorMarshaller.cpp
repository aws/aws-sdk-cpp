/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elementalinference/ElementalInferenceErrorMarshaller.h>
#include <aws/elementalinference/ElementalInferenceErrors.h>

using namespace Aws::Client;
using namespace Aws::ElementalInference;

AWSError<CoreErrors> ElementalInferenceErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ElementalInferenceErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
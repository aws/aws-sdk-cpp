/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/translate/TranslateErrorMarshaller.h>
#include <aws/translate/TranslateErrors.h>

using namespace Aws::Client;
using namespace Aws::Translate;

AWSError<CoreErrors> TranslateErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = TranslateErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
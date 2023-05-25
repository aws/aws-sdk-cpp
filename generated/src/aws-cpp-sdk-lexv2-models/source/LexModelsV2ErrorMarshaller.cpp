/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lexv2-models/LexModelsV2ErrorMarshaller.h>
#include <aws/lexv2-models/LexModelsV2Errors.h>

using namespace Aws::Client;
using namespace Aws::LexModelsV2;

AWSError<CoreErrors> LexModelsV2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LexModelsV2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
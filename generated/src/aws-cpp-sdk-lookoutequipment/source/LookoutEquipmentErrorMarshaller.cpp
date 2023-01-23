/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lookoutequipment/LookoutEquipmentErrorMarshaller.h>
#include <aws/lookoutequipment/LookoutEquipmentErrors.h>

using namespace Aws::Client;
using namespace Aws::LookoutEquipment;

AWSError<CoreErrors> LookoutEquipmentErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LookoutEquipmentErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
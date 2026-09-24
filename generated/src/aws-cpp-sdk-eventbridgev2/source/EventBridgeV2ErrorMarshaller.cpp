/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/eventbridgev2/EventBridgeV2ErrorMarshaller.h>
#include <aws/eventbridgev2/EventBridgeV2Errors.h>

using namespace Aws::Client;
using namespace Aws::EventBridgeV2;

AWSError<CoreErrors> EventBridgeV2ErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = EventBridgeV2ErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
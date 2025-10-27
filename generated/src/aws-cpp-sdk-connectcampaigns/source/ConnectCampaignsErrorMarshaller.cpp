/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/ConnectCampaignsErrorMarshaller.h>
#include <aws/connectcampaigns/ConnectCampaignsErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ConnectCampaigns;

AWSError<CoreErrors> ConnectCampaignsErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ConnectCampaignsErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
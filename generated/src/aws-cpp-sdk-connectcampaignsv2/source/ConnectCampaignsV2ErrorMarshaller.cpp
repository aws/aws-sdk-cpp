/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2ErrorMarshaller.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Errors.h>

using namespace Aws::Client;
using namespace Aws::ConnectCampaignsV2;

AWSError<CoreErrors> ConnectCampaignsV2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ConnectCampaignsV2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}
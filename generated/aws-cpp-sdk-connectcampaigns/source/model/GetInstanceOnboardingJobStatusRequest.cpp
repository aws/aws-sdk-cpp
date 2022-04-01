/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/GetInstanceOnboardingJobStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstanceOnboardingJobStatusRequest::GetInstanceOnboardingJobStatusRequest() : 
    m_connectInstanceIdHasBeenSet(false)
{
}

Aws::String GetInstanceOnboardingJobStatusRequest::SerializePayload() const
{
  return {};
}





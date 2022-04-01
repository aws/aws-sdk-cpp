/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetLaunchProfileMemberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLaunchProfileMemberRequest::GetLaunchProfileMemberRequest() : 
    m_launchProfileIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String GetLaunchProfileMemberRequest::SerializePayload() const
{
  return {};
}





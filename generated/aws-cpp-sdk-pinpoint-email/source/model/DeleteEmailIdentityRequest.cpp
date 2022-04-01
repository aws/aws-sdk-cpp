/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DeleteEmailIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEmailIdentityRequest::DeleteEmailIdentityRequest() : 
    m_emailIdentityHasBeenSet(false)
{
}

Aws::String DeleteEmailIdentityRequest::SerializePayload() const
{
  return {};
}





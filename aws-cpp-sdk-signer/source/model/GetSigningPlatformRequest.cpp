/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetSigningPlatformRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSigningPlatformRequest::GetSigningPlatformRequest() : 
    m_platformIdHasBeenSet(false)
{
}

Aws::String GetSigningPlatformRequest::SerializePayload() const
{
  return {};
}





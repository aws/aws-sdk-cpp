/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/CancelSigningProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelSigningProfileRequest::CancelSigningProfileRequest() : 
    m_profileNameHasBeenSet(false)
{
}

Aws::String CancelSigningProfileRequest::SerializePayload() const
{
  return {};
}





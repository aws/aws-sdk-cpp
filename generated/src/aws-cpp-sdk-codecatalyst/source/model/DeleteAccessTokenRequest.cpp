/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DeleteAccessTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccessTokenRequest::DeleteAccessTokenRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DeleteAccessTokenRequest::SerializePayload() const
{
  return {};
}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/BulkPublishRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BulkPublishRequest::BulkPublishRequest() : 
    m_identityPoolIdHasBeenSet(false)
{
}

Aws::String BulkPublishRequest::SerializePayload() const
{
  return {};
}





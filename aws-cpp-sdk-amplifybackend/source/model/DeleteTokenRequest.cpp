/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/DeleteTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTokenRequest::DeleteTokenRequest() : 
    m_appIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String DeleteTokenRequest::SerializePayload() const
{
  return {};
}





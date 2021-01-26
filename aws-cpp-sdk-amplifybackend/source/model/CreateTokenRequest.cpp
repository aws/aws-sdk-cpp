/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTokenRequest::CreateTokenRequest() : 
    m_appIdHasBeenSet(false)
{
}

Aws::String CreateTokenRequest::SerializePayload() const
{
  return {};
}





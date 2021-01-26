/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/DeleteAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppRequest::DeleteAppRequest() : 
    m_appIdHasBeenSet(false)
{
}

Aws::String DeleteAppRequest::SerializePayload() const
{
  return {};
}





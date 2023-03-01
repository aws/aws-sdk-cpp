/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/StopDevEnvironmentSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDevEnvironmentSessionRequest::StopDevEnvironmentSessionRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String StopDevEnvironmentSessionRequest::SerializePayload() const
{
  return {};
}





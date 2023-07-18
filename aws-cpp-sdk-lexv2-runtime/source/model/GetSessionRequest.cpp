/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/GetSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSessionRequest::GetSessionRequest() : 
    m_botIdHasBeenSet(false),
    m_botAliasIdHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String GetSessionRequest::SerializePayload() const
{
  return {};
}





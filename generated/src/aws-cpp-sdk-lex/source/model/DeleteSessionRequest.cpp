/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/DeleteSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSessionRequest::DeleteSessionRequest() : 
    m_botNameHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DeleteSessionRequest::SerializePayload() const
{
  return {};
}





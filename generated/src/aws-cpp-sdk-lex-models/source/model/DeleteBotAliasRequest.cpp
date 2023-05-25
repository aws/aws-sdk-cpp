/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/DeleteBotAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteBotAliasRequest::DeleteBotAliasRequest() : 
    m_nameHasBeenSet(false),
    m_botNameHasBeenSet(false)
{
}

Aws::String DeleteBotAliasRequest::SerializePayload() const
{
  return {};
}





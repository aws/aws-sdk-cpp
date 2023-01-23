/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetBotChannelAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBotChannelAssociationRequest::GetBotChannelAssociationRequest() : 
    m_nameHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_botAliasHasBeenSet(false)
{
}

Aws::String GetBotChannelAssociationRequest::SerializePayload() const
{
  return {};
}





﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lex-models/model/PutBotAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBotAliasRequest::PutBotAliasRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_checksumHasBeenSet(false)
{
}

Aws::String PutBotAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_botVersionHasBeenSet)
  {
   payload.WithString("botVersion", m_botVersion);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  return payload.View().WriteReadable();
}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/CreateIntentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIntentVersionRequest::CreateIntentVersionRequest() : 
    m_nameHasBeenSet(false),
    m_checksumHasBeenSet(false)
{
}

Aws::String CreateIntentVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  return payload.View().WriteReadable();
}





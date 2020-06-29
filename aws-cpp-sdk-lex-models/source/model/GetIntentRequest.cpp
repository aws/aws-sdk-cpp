/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetIntentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIntentRequest::GetIntentRequest() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String GetIntentRequest::SerializePayload() const
{
  return {};
}





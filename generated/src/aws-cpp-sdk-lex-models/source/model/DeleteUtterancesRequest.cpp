/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/DeleteUtterancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUtterancesRequest::DeleteUtterancesRequest() : 
    m_botNameHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String DeleteUtterancesRequest::SerializePayload() const
{
  return {};
}





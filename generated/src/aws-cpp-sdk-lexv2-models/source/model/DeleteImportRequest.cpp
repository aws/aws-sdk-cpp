/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteImportRequest::DeleteImportRequest() : 
    m_importIdHasBeenSet(false)
{
}

Aws::String DeleteImportRequest::SerializePayload() const
{
  return {};
}





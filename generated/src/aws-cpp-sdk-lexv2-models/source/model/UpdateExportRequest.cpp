﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filePasswordHasBeenSet)
  {
   payload.WithString("filePassword", m_filePassword);

  }

  return payload.View().WriteReadable();
}





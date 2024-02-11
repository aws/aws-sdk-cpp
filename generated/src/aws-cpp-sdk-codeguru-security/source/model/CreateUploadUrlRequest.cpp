/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/CreateUploadUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUploadUrlRequest::CreateUploadUrlRequest() : 
    m_scanNameHasBeenSet(false)
{
}

Aws::String CreateUploadUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  return payload.View().WriteReadable();
}





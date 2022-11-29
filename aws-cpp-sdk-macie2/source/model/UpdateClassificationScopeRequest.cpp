/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateClassificationScopeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateClassificationScopeRequest::UpdateClassificationScopeRequest() : 
    m_idHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

Aws::String UpdateClassificationScopeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload.View().WriteReadable();
}





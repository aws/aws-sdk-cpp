/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/CreateSourceRepositoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSourceRepositoryRequest::CreateSourceRepositoryRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateSourceRepositoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UpdateTestSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTestSetRequest::UpdateTestSetRequest() : 
    m_testSetIdHasBeenSet(false),
    m_testSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateTestSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_testSetNameHasBeenSet)
  {
   payload.WithString("testSetName", m_testSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}





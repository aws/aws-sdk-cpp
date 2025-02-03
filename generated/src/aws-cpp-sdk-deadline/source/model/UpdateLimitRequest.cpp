/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLimitRequest::UpdateLimitRequest() : 
    m_farmIdHasBeenSet(false),
    m_limitIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false)
{
}

Aws::String UpdateLimitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_maxCountHasBeenSet)
  {
   payload.WithInteger("maxCount", m_maxCount);

  }

  return payload.View().WriteReadable();
}





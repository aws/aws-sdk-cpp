/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/ContentTypeParametersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ContentTypeParametersRequest::ContentTypeParametersRequest() : 
    m_value(0),
    m_valueHasBeenSet(false)
{
}

Aws::String ContentTypeParametersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload.View().WriteReadable();
}





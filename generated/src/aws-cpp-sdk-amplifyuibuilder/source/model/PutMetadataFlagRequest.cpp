/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/PutMetadataFlagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutMetadataFlagRequest::PutMetadataFlagRequest() : 
    m_appIdHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_featureNameHasBeenSet(false)
{
}

Aws::String PutMetadataFlagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload = m_body.Jsonize();
  }

  return payload.View().WriteReadable();
}





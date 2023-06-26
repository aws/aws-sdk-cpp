/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteAuditSuppressionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAuditSuppressionRequest::DeleteAuditSuppressionRequest() : 
    m_checkNameHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false)
{
}

Aws::String DeleteAuditSuppressionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_checkNameHasBeenSet)
  {
   payload.WithString("checkName", m_checkName);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithObject("resourceIdentifier", m_resourceIdentifier.Jsonize());

  }

  return payload.View().WriteReadable();
}





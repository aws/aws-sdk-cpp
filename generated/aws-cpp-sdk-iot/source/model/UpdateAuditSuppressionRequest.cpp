/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateAuditSuppressionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAuditSuppressionRequest::UpdateAuditSuppressionRequest() : 
    m_checkNameHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_suppressIndefinitely(false),
    m_suppressIndefinitelyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdateAuditSuppressionRequest::SerializePayload() const
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

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("expirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if(m_suppressIndefinitelyHasBeenSet)
  {
   payload.WithBool("suppressIndefinitely", m_suppressIndefinitely);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}





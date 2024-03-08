/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/SendDataSetNotificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendDataSetNotificationRequest::SendDataSetNotificationRequest() : 
    m_scopeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_commentHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_type(NotificationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String SendDataSetNotificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("Scope", m_scope.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", NotificationTypeMapper::GetNameForNotificationType(m_type));
  }

  return payload.View().WriteReadable();
}





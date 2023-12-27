/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RejectSubscriptionRequestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectSubscriptionRequestRequest::RejectSubscriptionRequestRequest() : 
    m_decisionCommentHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
}

Aws::String RejectSubscriptionRequestRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_decisionCommentHasBeenSet)
  {
   payload.WithString("decisionComment", m_decisionComment);

  }

  return payload.View().WriteReadable();
}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RevokeRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeRevisionRequest::RevokeRevisionRequest() : 
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_revocationCommentHasBeenSet(false)
{
}

Aws::String RevokeRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_revocationCommentHasBeenSet)
  {
   payload.WithString("RevocationComment", m_revocationComment);

  }

  return payload.View().WriteReadable();
}





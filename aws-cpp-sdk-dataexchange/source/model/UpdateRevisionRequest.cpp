/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/UpdateRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRevisionRequest::UpdateRevisionRequest() : 
    m_commentHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_finalized(false),
    m_finalizedHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

Aws::String UpdateRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_finalizedHasBeenSet)
  {
   payload.WithBool("Finalized", m_finalized);

  }

  return payload.View().WriteReadable();
}





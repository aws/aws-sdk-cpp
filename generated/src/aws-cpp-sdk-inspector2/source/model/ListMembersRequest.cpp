/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListMembersRequest::ListMembersRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_onlyAssociated(false),
    m_onlyAssociatedHasBeenSet(false)
{
}

Aws::String ListMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_onlyAssociatedHasBeenSet)
  {
   payload.WithBool("onlyAssociated", m_onlyAssociated);

  }

  return payload.View().WriteReadable();
}





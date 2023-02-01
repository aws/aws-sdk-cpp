/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/ListCasesForContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCasesForContactRequest::ListCasesForContactRequest() : 
    m_contactArnHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListCasesForContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("contactArn", m_contactArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}





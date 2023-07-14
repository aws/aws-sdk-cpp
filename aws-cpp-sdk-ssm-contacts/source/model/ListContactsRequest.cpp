/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ListContactsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListContactsRequest::ListContactsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_aliasPrefixHasBeenSet(false),
    m_type(ContactType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ListContactsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_aliasPrefixHasBeenSet)
  {
   payload.WithString("AliasPrefix", m_aliasPrefix);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ContactTypeMapper::GetNameForContactType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListContactsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.ListContacts"));
  return headers;

}





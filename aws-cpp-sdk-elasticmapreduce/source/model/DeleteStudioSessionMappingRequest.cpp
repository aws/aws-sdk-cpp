/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/DeleteStudioSessionMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteStudioSessionMappingRequest::DeleteStudioSessionMappingRequest() : 
    m_studioIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_identityNameHasBeenSet(false),
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false)
{
}

Aws::String DeleteStudioSessionMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_studioIdHasBeenSet)
  {
   payload.WithString("StudioId", m_studioId);

  }

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_identityNameHasBeenSet)
  {
   payload.WithString("IdentityName", m_identityName);

  }

  if(m_identityTypeHasBeenSet)
  {
   payload.WithString("IdentityType", IdentityTypeMapper::GetNameForIdentityType(m_identityType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStudioSessionMappingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.DeleteStudioSessionMapping"));
  return headers;

}





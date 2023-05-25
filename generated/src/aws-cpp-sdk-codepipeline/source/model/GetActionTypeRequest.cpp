/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GetActionTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetActionTypeRequest::GetActionTypeRequest() : 
    m_category(ActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String GetActionTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", ActionCategoryMapper::GetNameForActionCategory(m_category));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetActionTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.GetActionType"));
  return headers;

}





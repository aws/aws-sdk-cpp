/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/UpdateProjectVisibilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProjectVisibilityRequest::UpdateProjectVisibilityRequest() : 
    m_projectArnHasBeenSet(false),
    m_projectVisibility(ProjectVisibilityType::NOT_SET),
    m_projectVisibilityHasBeenSet(false),
    m_resourceAccessRoleHasBeenSet(false)
{
}

Aws::String UpdateProjectVisibilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_projectVisibilityHasBeenSet)
  {
   payload.WithString("projectVisibility", ProjectVisibilityTypeMapper::GetNameForProjectVisibilityType(m_projectVisibility));
  }

  if(m_resourceAccessRoleHasBeenSet)
  {
   payload.WithString("resourceAccessRole", m_resourceAccessRole);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProjectVisibilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.UpdateProjectVisibility"));
  return headers;

}





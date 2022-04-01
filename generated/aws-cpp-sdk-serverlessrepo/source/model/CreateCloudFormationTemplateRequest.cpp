/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/CreateCloudFormationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCloudFormationTemplateRequest::CreateCloudFormationTemplateRequest() : 
    m_applicationIdHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
}

Aws::String CreateCloudFormationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  return payload.View().WriteReadable();
}





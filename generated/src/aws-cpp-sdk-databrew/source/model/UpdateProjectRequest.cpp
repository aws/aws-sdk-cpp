/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/UpdateProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProjectRequest::UpdateProjectRequest() : 
    m_sampleHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sampleHasBeenSet)
  {
   payload.WithObject("Sample", m_sample.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}





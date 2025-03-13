/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/StartDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_sourceUrlHasBeenSet)
  {
   payload.WithString("sourceUrl", m_sourceUrl);

  }

  if(m_sourceUrlTypeHasBeenSet)
  {
   payload.WithString("sourceUrlType", SourceUrlTypeMapper::GetNameForSourceUrlType(m_sourceUrlType));
  }

  return payload.View().WriteReadable();
}





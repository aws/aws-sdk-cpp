/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/DetachFromIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachFromIndexRequest::DetachFromIndexRequest() : 
    m_directoryArnHasBeenSet(false),
    m_indexReferenceHasBeenSet(false),
    m_targetReferenceHasBeenSet(false)
{
}

Aws::String DetachFromIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexReferenceHasBeenSet)
  {
   payload.WithObject("IndexReference", m_indexReference.Jsonize());

  }

  if(m_targetReferenceHasBeenSet)
  {
   payload.WithObject("TargetReference", m_targetReference.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachFromIndexRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}





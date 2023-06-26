/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/DetachPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachPolicyRequest::DetachPolicyRequest() : 
    m_directoryArnHasBeenSet(false),
    m_policyReferenceHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
}

Aws::String DetachPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyReferenceHasBeenSet)
  {
   payload.WithObject("PolicyReference", m_policyReference.Jsonize());

  }

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetachPolicyRequest::GetRequestSpecificHeaders() const
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





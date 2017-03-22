/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/clouddirectory/model/AttachPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachPolicyRequest::AttachPolicyRequest() : 
    m_directoryArnHasBeenSet(false),
    m_policyReferenceHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
}

Aws::String AttachPolicyRequest::SerializePayload() const
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AttachPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-data-partition", ss.str()));
    ss.str("");
  }

  return headers;

}





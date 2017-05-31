/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/clouddirectory/model/AttachTypedLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachTypedLinkRequest::AttachTypedLinkRequest() : 
    m_directoryArnHasBeenSet(false),
    m_sourceObjectReferenceHasBeenSet(false),
    m_targetObjectReferenceHasBeenSet(false),
    m_typedLinkFacetHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String AttachTypedLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceObjectReferenceHasBeenSet)
  {
   payload.WithObject("SourceObjectReference", m_sourceObjectReference.Jsonize());

  }

  if(m_targetObjectReferenceHasBeenSet)
  {
   payload.WithObject("TargetObjectReference", m_targetObjectReference.Jsonize());

  }

  if(m_typedLinkFacetHasBeenSet)
  {
   payload.WithObject("TypedLinkFacet", m_typedLinkFacet.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AttachTypedLinkRequest::GetRequestSpecificHeaders() const
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





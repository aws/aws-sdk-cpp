/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAttachTypedLink.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchAttachTypedLink::BatchAttachTypedLink() : 
    m_sourceObjectReferenceHasBeenSet(false),
    m_targetObjectReferenceHasBeenSet(false),
    m_typedLinkFacetHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

BatchAttachTypedLink::BatchAttachTypedLink(JsonView jsonValue) : 
    m_sourceObjectReferenceHasBeenSet(false),
    m_targetObjectReferenceHasBeenSet(false),
    m_typedLinkFacetHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachTypedLink& BatchAttachTypedLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceObjectReference"))
  {
    m_sourceObjectReference = jsonValue.GetObject("SourceObjectReference");

    m_sourceObjectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetObjectReference"))
  {
    m_targetObjectReference = jsonValue.GetObject("TargetObjectReference");

    m_targetObjectReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TypedLinkFacet"))
  {
    m_typedLinkFacet = jsonValue.GetObject("TypedLinkFacet");

    m_typedLinkFacetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachTypedLink::Jsonize() const
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
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

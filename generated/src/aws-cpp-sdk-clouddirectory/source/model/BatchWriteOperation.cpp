/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchWriteOperation.h>
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

BatchWriteOperation::BatchWriteOperation() : 
    m_createObjectHasBeenSet(false),
    m_attachObjectHasBeenSet(false),
    m_detachObjectHasBeenSet(false),
    m_updateObjectAttributesHasBeenSet(false),
    m_deleteObjectHasBeenSet(false),
    m_addFacetToObjectHasBeenSet(false),
    m_removeFacetFromObjectHasBeenSet(false),
    m_attachPolicyHasBeenSet(false),
    m_detachPolicyHasBeenSet(false),
    m_createIndexHasBeenSet(false),
    m_attachToIndexHasBeenSet(false),
    m_detachFromIndexHasBeenSet(false),
    m_attachTypedLinkHasBeenSet(false),
    m_detachTypedLinkHasBeenSet(false),
    m_updateLinkAttributesHasBeenSet(false)
{
}

BatchWriteOperation::BatchWriteOperation(JsonView jsonValue) : 
    m_createObjectHasBeenSet(false),
    m_attachObjectHasBeenSet(false),
    m_detachObjectHasBeenSet(false),
    m_updateObjectAttributesHasBeenSet(false),
    m_deleteObjectHasBeenSet(false),
    m_addFacetToObjectHasBeenSet(false),
    m_removeFacetFromObjectHasBeenSet(false),
    m_attachPolicyHasBeenSet(false),
    m_detachPolicyHasBeenSet(false),
    m_createIndexHasBeenSet(false),
    m_attachToIndexHasBeenSet(false),
    m_detachFromIndexHasBeenSet(false),
    m_attachTypedLinkHasBeenSet(false),
    m_detachTypedLinkHasBeenSet(false),
    m_updateLinkAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchWriteOperation& BatchWriteOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateObject"))
  {
    m_createObject = jsonValue.GetObject("CreateObject");

    m_createObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachObject"))
  {
    m_attachObject = jsonValue.GetObject("AttachObject");

    m_attachObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetachObject"))
  {
    m_detachObject = jsonValue.GetObject("DetachObject");

    m_detachObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateObjectAttributes"))
  {
    m_updateObjectAttributes = jsonValue.GetObject("UpdateObjectAttributes");

    m_updateObjectAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteObject"))
  {
    m_deleteObject = jsonValue.GetObject("DeleteObject");

    m_deleteObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddFacetToObject"))
  {
    m_addFacetToObject = jsonValue.GetObject("AddFacetToObject");

    m_addFacetToObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveFacetFromObject"))
  {
    m_removeFacetFromObject = jsonValue.GetObject("RemoveFacetFromObject");

    m_removeFacetFromObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachPolicy"))
  {
    m_attachPolicy = jsonValue.GetObject("AttachPolicy");

    m_attachPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetachPolicy"))
  {
    m_detachPolicy = jsonValue.GetObject("DetachPolicy");

    m_detachPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateIndex"))
  {
    m_createIndex = jsonValue.GetObject("CreateIndex");

    m_createIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachToIndex"))
  {
    m_attachToIndex = jsonValue.GetObject("AttachToIndex");

    m_attachToIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetachFromIndex"))
  {
    m_detachFromIndex = jsonValue.GetObject("DetachFromIndex");

    m_detachFromIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachTypedLink"))
  {
    m_attachTypedLink = jsonValue.GetObject("AttachTypedLink");

    m_attachTypedLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetachTypedLink"))
  {
    m_detachTypedLink = jsonValue.GetObject("DetachTypedLink");

    m_detachTypedLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateLinkAttributes"))
  {
    m_updateLinkAttributes = jsonValue.GetObject("UpdateLinkAttributes");

    m_updateLinkAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchWriteOperation::Jsonize() const
{
  JsonValue payload;

  if(m_createObjectHasBeenSet)
  {
   payload.WithObject("CreateObject", m_createObject.Jsonize());

  }

  if(m_attachObjectHasBeenSet)
  {
   payload.WithObject("AttachObject", m_attachObject.Jsonize());

  }

  if(m_detachObjectHasBeenSet)
  {
   payload.WithObject("DetachObject", m_detachObject.Jsonize());

  }

  if(m_updateObjectAttributesHasBeenSet)
  {
   payload.WithObject("UpdateObjectAttributes", m_updateObjectAttributes.Jsonize());

  }

  if(m_deleteObjectHasBeenSet)
  {
   payload.WithObject("DeleteObject", m_deleteObject.Jsonize());

  }

  if(m_addFacetToObjectHasBeenSet)
  {
   payload.WithObject("AddFacetToObject", m_addFacetToObject.Jsonize());

  }

  if(m_removeFacetFromObjectHasBeenSet)
  {
   payload.WithObject("RemoveFacetFromObject", m_removeFacetFromObject.Jsonize());

  }

  if(m_attachPolicyHasBeenSet)
  {
   payload.WithObject("AttachPolicy", m_attachPolicy.Jsonize());

  }

  if(m_detachPolicyHasBeenSet)
  {
   payload.WithObject("DetachPolicy", m_detachPolicy.Jsonize());

  }

  if(m_createIndexHasBeenSet)
  {
   payload.WithObject("CreateIndex", m_createIndex.Jsonize());

  }

  if(m_attachToIndexHasBeenSet)
  {
   payload.WithObject("AttachToIndex", m_attachToIndex.Jsonize());

  }

  if(m_detachFromIndexHasBeenSet)
  {
   payload.WithObject("DetachFromIndex", m_detachFromIndex.Jsonize());

  }

  if(m_attachTypedLinkHasBeenSet)
  {
   payload.WithObject("AttachTypedLink", m_attachTypedLink.Jsonize());

  }

  if(m_detachTypedLinkHasBeenSet)
  {
   payload.WithObject("DetachTypedLink", m_detachTypedLink.Jsonize());

  }

  if(m_updateLinkAttributesHasBeenSet)
  {
   payload.WithObject("UpdateLinkAttributes", m_updateLinkAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

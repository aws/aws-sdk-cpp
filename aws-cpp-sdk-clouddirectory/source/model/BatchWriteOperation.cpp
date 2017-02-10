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
    m_removeFacetFromObjectHasBeenSet(false)
{
}

BatchWriteOperation::BatchWriteOperation(const JsonValue& jsonValue) : 
    m_createObjectHasBeenSet(false),
    m_attachObjectHasBeenSet(false),
    m_detachObjectHasBeenSet(false),
    m_updateObjectAttributesHasBeenSet(false),
    m_deleteObjectHasBeenSet(false),
    m_addFacetToObjectHasBeenSet(false),
    m_removeFacetFromObjectHasBeenSet(false)
{
  *this = jsonValue;
}

BatchWriteOperation& BatchWriteOperation::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
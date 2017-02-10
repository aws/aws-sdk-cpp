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
#include <aws/clouddirectory/model/BatchAttachObject.h>
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

BatchAttachObject::BatchAttachObject() : 
    m_parentReferenceHasBeenSet(false),
    m_childReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
}

BatchAttachObject::BatchAttachObject(const JsonValue& jsonValue) : 
    m_parentReferenceHasBeenSet(false),
    m_childReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachObject& BatchAttachObject::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ParentReference"))
  {
    m_parentReference = jsonValue.GetObject("ParentReference");

    m_parentReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChildReference"))
  {
    m_childReference = jsonValue.GetObject("ChildReference");

    m_childReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkName"))
  {
    m_linkName = jsonValue.GetString("LinkName");

    m_linkNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachObject::Jsonize() const
{
  JsonValue payload;

  if(m_parentReferenceHasBeenSet)
  {
   payload.WithObject("ParentReference", m_parentReference.Jsonize());

  }

  if(m_childReferenceHasBeenSet)
  {
   payload.WithObject("ChildReference", m_childReference.Jsonize());

  }

  if(m_linkNameHasBeenSet)
  {
   payload.WithString("LinkName", m_linkName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
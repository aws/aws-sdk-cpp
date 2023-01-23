/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BatchAttachObject::BatchAttachObject(JsonView jsonValue) : 
    m_parentReferenceHasBeenSet(false),
    m_childReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachObject& BatchAttachObject::operator =(JsonView jsonValue)
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

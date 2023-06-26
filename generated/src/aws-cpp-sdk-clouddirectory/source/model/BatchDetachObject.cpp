/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchDetachObject.h>
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

BatchDetachObject::BatchDetachObject() : 
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
}

BatchDetachObject::BatchDetachObject(JsonView jsonValue) : 
    m_parentReferenceHasBeenSet(false),
    m_linkNameHasBeenSet(false),
    m_batchReferenceNameHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachObject& BatchDetachObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParentReference"))
  {
    m_parentReference = jsonValue.GetObject("ParentReference");

    m_parentReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkName"))
  {
    m_linkName = jsonValue.GetString("LinkName");

    m_linkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchReferenceName"))
  {
    m_batchReferenceName = jsonValue.GetString("BatchReferenceName");

    m_batchReferenceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachObject::Jsonize() const
{
  JsonValue payload;

  if(m_parentReferenceHasBeenSet)
  {
   payload.WithObject("ParentReference", m_parentReference.Jsonize());

  }

  if(m_linkNameHasBeenSet)
  {
   payload.WithString("LinkName", m_linkName);

  }

  if(m_batchReferenceNameHasBeenSet)
  {
   payload.WithString("BatchReferenceName", m_batchReferenceName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

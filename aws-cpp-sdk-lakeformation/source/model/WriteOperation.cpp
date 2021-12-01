/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/WriteOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

WriteOperation::WriteOperation() : 
    m_addObjectHasBeenSet(false),
    m_deleteObjectHasBeenSet(false)
{
}

WriteOperation::WriteOperation(JsonView jsonValue) : 
    m_addObjectHasBeenSet(false),
    m_deleteObjectHasBeenSet(false)
{
  *this = jsonValue;
}

WriteOperation& WriteOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddObject"))
  {
    m_addObject = jsonValue.GetObject("AddObject");

    m_addObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteObject"))
  {
    m_deleteObject = jsonValue.GetObject("DeleteObject");

    m_deleteObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue WriteOperation::Jsonize() const
{
  JsonValue payload;

  if(m_addObjectHasBeenSet)
  {
   payload.WithObject("AddObject", m_addObject.Jsonize());

  }

  if(m_deleteObjectHasBeenSet)
  {
   payload.WithObject("DeleteObject", m_deleteObject.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

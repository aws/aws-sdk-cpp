/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TransformOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TransformOperation::TransformOperation() : 
    m_projectOperationHasBeenSet(false),
    m_filterOperationHasBeenSet(false),
    m_createColumnsOperationHasBeenSet(false),
    m_renameColumnOperationHasBeenSet(false),
    m_castColumnTypeOperationHasBeenSet(false),
    m_tagColumnOperationHasBeenSet(false)
{
}

TransformOperation::TransformOperation(JsonView jsonValue) : 
    m_projectOperationHasBeenSet(false),
    m_filterOperationHasBeenSet(false),
    m_createColumnsOperationHasBeenSet(false),
    m_renameColumnOperationHasBeenSet(false),
    m_castColumnTypeOperationHasBeenSet(false),
    m_tagColumnOperationHasBeenSet(false)
{
  *this = jsonValue;
}

TransformOperation& TransformOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectOperation"))
  {
    m_projectOperation = jsonValue.GetObject("ProjectOperation");

    m_projectOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterOperation"))
  {
    m_filterOperation = jsonValue.GetObject("FilterOperation");

    m_filterOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateColumnsOperation"))
  {
    m_createColumnsOperation = jsonValue.GetObject("CreateColumnsOperation");

    m_createColumnsOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenameColumnOperation"))
  {
    m_renameColumnOperation = jsonValue.GetObject("RenameColumnOperation");

    m_renameColumnOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CastColumnTypeOperation"))
  {
    m_castColumnTypeOperation = jsonValue.GetObject("CastColumnTypeOperation");

    m_castColumnTypeOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagColumnOperation"))
  {
    m_tagColumnOperation = jsonValue.GetObject("TagColumnOperation");

    m_tagColumnOperationHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformOperation::Jsonize() const
{
  JsonValue payload;

  if(m_projectOperationHasBeenSet)
  {
   payload.WithObject("ProjectOperation", m_projectOperation.Jsonize());

  }

  if(m_filterOperationHasBeenSet)
  {
   payload.WithObject("FilterOperation", m_filterOperation.Jsonize());

  }

  if(m_createColumnsOperationHasBeenSet)
  {
   payload.WithObject("CreateColumnsOperation", m_createColumnsOperation.Jsonize());

  }

  if(m_renameColumnOperationHasBeenSet)
  {
   payload.WithObject("RenameColumnOperation", m_renameColumnOperation.Jsonize());

  }

  if(m_castColumnTypeOperationHasBeenSet)
  {
   payload.WithObject("CastColumnTypeOperation", m_castColumnTypeOperation.Jsonize());

  }

  if(m_tagColumnOperationHasBeenSet)
  {
   payload.WithObject("TagColumnOperation", m_tagColumnOperation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

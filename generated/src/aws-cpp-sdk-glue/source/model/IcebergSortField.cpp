/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergSortField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

IcebergSortField::IcebergSortField(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergSortField& IcebergSortField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetInteger("SourceId");
    m_sourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Transform"))
  {
    m_transform = jsonValue.GetString("Transform");
    m_transformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = IcebergSortDirectionMapper::GetIcebergSortDirectionForName(jsonValue.GetString("Direction"));
    m_directionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NullOrder"))
  {
    m_nullOrder = IcebergNullOrderMapper::GetIcebergNullOrderForName(jsonValue.GetString("NullOrder"));
    m_nullOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergSortField::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdHasBeenSet)
  {
   payload.WithInteger("SourceId", m_sourceId);

  }

  if(m_transformHasBeenSet)
  {
   payload.WithString("Transform", m_transform);

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", IcebergSortDirectionMapper::GetNameForIcebergSortDirection(m_direction));
  }

  if(m_nullOrderHasBeenSet)
  {
   payload.WithString("NullOrder", IcebergNullOrderMapper::GetNameForIcebergNullOrder(m_nullOrder));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

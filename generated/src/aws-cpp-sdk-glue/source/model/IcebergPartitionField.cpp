/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergPartitionField.h>
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

IcebergPartitionField::IcebergPartitionField(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergPartitionField& IcebergPartitionField::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetInteger("FieldId");
    m_fieldIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergPartitionField::Jsonize() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_fieldIdHasBeenSet)
  {
   payload.WithInteger("FieldId", m_fieldId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

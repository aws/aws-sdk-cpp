/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GlueStudioSchemaColumn.h>
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

GlueStudioSchemaColumn::GlueStudioSchemaColumn(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueStudioSchemaColumn& GlueStudioSchemaColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlueStudioType"))
  {
    m_glueStudioType = jsonValue.GetString("GlueStudioType");
    m_glueStudioTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueStudioSchemaColumn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_glueStudioTypeHasBeenSet)
  {
   payload.WithString("GlueStudioType", m_glueStudioType);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergStructField.h>
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

IcebergStructField::IcebergStructField(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergStructField& IcebergStructField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetObject("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Required"))
  {
    m_required = jsonValue.GetBool("Required");
    m_requiredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Doc"))
  {
    m_doc = jsonValue.GetString("Doc");
    m_docHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergStructField::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
    if(!m_type.View().IsNull())
    {
       payload.WithObject("Type", JsonValue(m_type.View()));
    }
  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("Required", m_required);

  }

  if(m_docHasBeenSet)
  {
   payload.WithString("Doc", m_doc);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

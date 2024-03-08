/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/SchemaChangeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

SchemaChangeDetails::SchemaChangeDetails() : 
    m_nameHasBeenSet(false),
    m_type(SchemaChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SchemaChangeDetails::SchemaChangeDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(SchemaChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaChangeDetails& SchemaChangeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SchemaChangeTypeMapper::GetSchemaChangeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaChangeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SchemaChangeTypeMapper::GetNameForSchemaChangeType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformFilterCriteria.h>
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

TransformFilterCriteria::TransformFilterCriteria() : 
    m_nameHasBeenSet(false),
    m_transformType(TransformType::NOT_SET),
    m_transformTypeHasBeenSet(false),
    m_status(TransformStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_lastModifiedBeforeHasBeenSet(false),
    m_lastModifiedAfterHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

TransformFilterCriteria::TransformFilterCriteria(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_transformType(TransformType::NOT_SET),
    m_transformTypeHasBeenSet(false),
    m_status(TransformStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_glueVersionHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_lastModifiedBeforeHasBeenSet(false),
    m_lastModifiedAfterHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
  *this = jsonValue;
}

TransformFilterCriteria& TransformFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformType"))
  {
    m_transformType = TransformTypeMapper::GetTransformTypeForName(jsonValue.GetString("TransformType"));

    m_transformTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TransformStatusTypeMapper::GetTransformStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueVersion"))
  {
    m_glueVersion = jsonValue.GetString("GlueVersion");

    m_glueVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBefore"))
  {
    m_createdBefore = jsonValue.GetDouble("CreatedBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAfter"))
  {
    m_createdAfter = jsonValue.GetDouble("CreatedAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBefore"))
  {
    m_lastModifiedBefore = jsonValue.GetDouble("LastModifiedBefore");

    m_lastModifiedBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedAfter"))
  {
    m_lastModifiedAfter = jsonValue.GetDouble("LastModifiedAfter");

    m_lastModifiedAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    Aws::Utils::Array<JsonView> schemaJsonList = jsonValue.GetArray("Schema");
    for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
    {
      m_schema.push_back(schemaJsonList[schemaIndex].AsObject());
    }
    m_schemaHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_transformTypeHasBeenSet)
  {
   payload.WithString("TransformType", TransformTypeMapper::GetNameForTransformType(m_transformType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TransformStatusTypeMapper::GetNameForTransformStatusType(m_status));
  }

  if(m_glueVersionHasBeenSet)
  {
   payload.WithString("GlueVersion", m_glueVersion);

  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_lastModifiedBeforeHasBeenSet)
  {
   payload.WithDouble("LastModifiedBefore", m_lastModifiedBefore.SecondsWithMSPrecision());
  }

  if(m_lastModifiedAfterHasBeenSet)
  {
   payload.WithDouble("LastModifiedAfter", m_lastModifiedAfter.SecondsWithMSPrecision());
  }

  if(m_schemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schemaJsonList(m_schema.size());
   for(unsigned schemaIndex = 0; schemaIndex < schemaJsonList.GetLength(); ++schemaIndex)
   {
     schemaJsonList[schemaIndex].AsObject(m_schema[schemaIndex].Jsonize());
   }
   payload.WithArray("Schema", std::move(schemaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

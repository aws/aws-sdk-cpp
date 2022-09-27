/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/FleetAdvisorSchemaObjectResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

FleetAdvisorSchemaObjectResponse::FleetAdvisorSchemaObjectResponse() : 
    m_schemaIdHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_numberOfObjects(0),
    m_numberOfObjectsHasBeenSet(false),
    m_codeLineCount(0),
    m_codeLineCountHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
}

FleetAdvisorSchemaObjectResponse::FleetAdvisorSchemaObjectResponse(JsonView jsonValue) : 
    m_schemaIdHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_numberOfObjects(0),
    m_numberOfObjectsHasBeenSet(false),
    m_codeLineCount(0),
    m_codeLineCountHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

FleetAdvisorSchemaObjectResponse& FleetAdvisorSchemaObjectResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetString("SchemaId");

    m_schemaIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectType"))
  {
    m_objectType = jsonValue.GetString("ObjectType");

    m_objectTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfObjects"))
  {
    m_numberOfObjects = jsonValue.GetInt64("NumberOfObjects");

    m_numberOfObjectsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeLineCount"))
  {
    m_codeLineCount = jsonValue.GetInt64("CodeLineCount");

    m_codeLineCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInt64("CodeSize");

    m_codeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetAdvisorSchemaObjectResponse::Jsonize() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithString("SchemaId", m_schemaId);

  }

  if(m_objectTypeHasBeenSet)
  {
   payload.WithString("ObjectType", m_objectType);

  }

  if(m_numberOfObjectsHasBeenSet)
  {
   payload.WithInt64("NumberOfObjects", m_numberOfObjects);

  }

  if(m_codeLineCountHasBeenSet)
  {
   payload.WithInt64("CodeLineCount", m_codeLineCount);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInt64("CodeSize", m_codeSize);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

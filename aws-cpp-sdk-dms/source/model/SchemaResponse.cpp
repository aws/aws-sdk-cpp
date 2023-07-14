/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SchemaResponse.h>
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

SchemaResponse::SchemaResponse() : 
    m_codeLineCount(0),
    m_codeLineCountHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false),
    m_complexityHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_databaseInstanceHasBeenSet(false),
    m_schemaIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_originalSchemaHasBeenSet(false),
    m_similarity(0.0),
    m_similarityHasBeenSet(false)
{
}

SchemaResponse::SchemaResponse(JsonView jsonValue) : 
    m_codeLineCount(0),
    m_codeLineCountHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false),
    m_complexityHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_databaseInstanceHasBeenSet(false),
    m_schemaIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_originalSchemaHasBeenSet(false),
    m_similarity(0.0),
    m_similarityHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaResponse& SchemaResponse::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("Complexity"))
  {
    m_complexity = jsonValue.GetString("Complexity");

    m_complexityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Server"))
  {
    m_server = jsonValue.GetObject("Server");

    m_serverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseInstance"))
  {
    m_databaseInstance = jsonValue.GetObject("DatabaseInstance");

    m_databaseInstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetString("SchemaId");

    m_schemaIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalSchema"))
  {
    m_originalSchema = jsonValue.GetObject("OriginalSchema");

    m_originalSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Similarity"))
  {
    m_similarity = jsonValue.GetDouble("Similarity");

    m_similarityHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaResponse::Jsonize() const
{
  JsonValue payload;

  if(m_codeLineCountHasBeenSet)
  {
   payload.WithInt64("CodeLineCount", m_codeLineCount);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInt64("CodeSize", m_codeSize);

  }

  if(m_complexityHasBeenSet)
  {
   payload.WithString("Complexity", m_complexity);

  }

  if(m_serverHasBeenSet)
  {
   payload.WithObject("Server", m_server.Jsonize());

  }

  if(m_databaseInstanceHasBeenSet)
  {
   payload.WithObject("DatabaseInstance", m_databaseInstance.Jsonize());

  }

  if(m_schemaIdHasBeenSet)
  {
   payload.WithString("SchemaId", m_schemaId);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_originalSchemaHasBeenSet)
  {
   payload.WithObject("OriginalSchema", m_originalSchema.Jsonize());

  }

  if(m_similarityHasBeenSet)
  {
   payload.WithDouble("Similarity", m_similarity);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

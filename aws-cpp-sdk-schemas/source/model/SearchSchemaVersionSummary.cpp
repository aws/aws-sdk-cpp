/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/schemas/model/SearchSchemaVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Schemas
{
namespace Model
{

SearchSchemaVersionSummary::SearchSchemaVersionSummary() : 
    m_createdDateHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
}

SearchSchemaVersionSummary::SearchSchemaVersionSummary(JsonView jsonValue) : 
    m_createdDateHasBeenSet(false),
    m_schemaVersionHasBeenSet(false)
{
  *this = jsonValue;
}

SearchSchemaVersionSummary& SearchSchemaVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchSchemaVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Schemas
} // namespace Aws

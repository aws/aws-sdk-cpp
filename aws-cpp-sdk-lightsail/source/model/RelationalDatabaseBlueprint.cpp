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

#include <aws/lightsail/model/RelationalDatabaseBlueprint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabaseBlueprint::RelationalDatabaseBlueprint() : 
    m_blueprintIdHasBeenSet(false),
    m_engine(RelationalDatabaseEngine::NOT_SET),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineDescriptionHasBeenSet(false),
    m_engineVersionDescriptionHasBeenSet(false),
    m_isEngineDefault(false),
    m_isEngineDefaultHasBeenSet(false)
{
}

RelationalDatabaseBlueprint::RelationalDatabaseBlueprint(JsonView jsonValue) : 
    m_blueprintIdHasBeenSet(false),
    m_engine(RelationalDatabaseEngine::NOT_SET),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineDescriptionHasBeenSet(false),
    m_engineVersionDescriptionHasBeenSet(false),
    m_isEngineDefault(false),
    m_isEngineDefaultHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseBlueprint& RelationalDatabaseBlueprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blueprintId"))
  {
    m_blueprintId = jsonValue.GetString("blueprintId");

    m_blueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engine"))
  {
    m_engine = RelationalDatabaseEngineMapper::GetRelationalDatabaseEngineForName(jsonValue.GetString("engine"));

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineDescription"))
  {
    m_engineDescription = jsonValue.GetString("engineDescription");

    m_engineDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersionDescription"))
  {
    m_engineVersionDescription = jsonValue.GetString("engineVersionDescription");

    m_engineVersionDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isEngineDefault"))
  {
    m_isEngineDefault = jsonValue.GetBool("isEngineDefault");

    m_isEngineDefaultHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseBlueprint::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintIdHasBeenSet)
  {
   payload.WithString("blueprintId", m_blueprintId);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", RelationalDatabaseEngineMapper::GetNameForRelationalDatabaseEngine(m_engine));
  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_engineDescriptionHasBeenSet)
  {
   payload.WithString("engineDescription", m_engineDescription);

  }

  if(m_engineVersionDescriptionHasBeenSet)
  {
   payload.WithString("engineVersionDescription", m_engineVersionDescription);

  }

  if(m_isEngineDefaultHasBeenSet)
  {
   payload.WithBool("isEngineDefault", m_isEngineDefault);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

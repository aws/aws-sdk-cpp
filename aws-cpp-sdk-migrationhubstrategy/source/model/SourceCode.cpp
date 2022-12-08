/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/SourceCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

SourceCode::SourceCode() : 
    m_locationHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_versionControl(VersionControl::NOT_SET),
    m_versionControlHasBeenSet(false)
{
}

SourceCode::SourceCode(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_versionControl(VersionControl::NOT_SET),
    m_versionControlHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCode& SourceCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionControl"))
  {
    m_versionControl = VersionControlMapper::GetVersionControlForName(jsonValue.GetString("versionControl"));

    m_versionControlHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCode::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_versionControlHasBeenSet)
  {
   payload.WithString("versionControl", VersionControlMapper::GetNameForVersionControl(m_versionControl));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws

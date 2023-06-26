/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DatabaseInstanceSoftwareDetailsResponse.h>
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

DatabaseInstanceSoftwareDetailsResponse::DatabaseInstanceSoftwareDetailsResponse() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineEditionHasBeenSet(false),
    m_servicePackHasBeenSet(false),
    m_supportLevelHasBeenSet(false),
    m_osArchitecture(0),
    m_osArchitectureHasBeenSet(false),
    m_tooltipHasBeenSet(false)
{
}

DatabaseInstanceSoftwareDetailsResponse::DatabaseInstanceSoftwareDetailsResponse(JsonView jsonValue) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_engineEditionHasBeenSet(false),
    m_servicePackHasBeenSet(false),
    m_supportLevelHasBeenSet(false),
    m_osArchitecture(0),
    m_osArchitectureHasBeenSet(false),
    m_tooltipHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseInstanceSoftwareDetailsResponse& DatabaseInstanceSoftwareDetailsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineEdition"))
  {
    m_engineEdition = jsonValue.GetString("EngineEdition");

    m_engineEditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServicePack"))
  {
    m_servicePack = jsonValue.GetString("ServicePack");

    m_servicePackHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportLevel"))
  {
    m_supportLevel = jsonValue.GetString("SupportLevel");

    m_supportLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OsArchitecture"))
  {
    m_osArchitecture = jsonValue.GetInteger("OsArchitecture");

    m_osArchitectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetString("Tooltip");

    m_tooltipHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseInstanceSoftwareDetailsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_engineEditionHasBeenSet)
  {
   payload.WithString("EngineEdition", m_engineEdition);

  }

  if(m_servicePackHasBeenSet)
  {
   payload.WithString("ServicePack", m_servicePack);

  }

  if(m_supportLevelHasBeenSet)
  {
   payload.WithString("SupportLevel", m_supportLevel);

  }

  if(m_osArchitectureHasBeenSet)
  {
   payload.WithInteger("OsArchitecture", m_osArchitecture);

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithString("Tooltip", m_tooltip);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

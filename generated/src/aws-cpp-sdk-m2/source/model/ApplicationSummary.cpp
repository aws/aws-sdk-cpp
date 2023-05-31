/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

ApplicationSummary::ApplicationSummary() : 
    m_applicationArnHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deploymentStatus(ApplicationDeploymentLifecycle::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastStartTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(ApplicationLifecycle::NOT_SET),
    m_statusHasBeenSet(false),
    m_versionStatus(ApplicationVersionLifecycle::NOT_SET),
    m_versionStatusHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_applicationArnHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deploymentStatus(ApplicationDeploymentLifecycle::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastStartTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_status(ApplicationLifecycle::NOT_SET),
    m_statusHasBeenSet(false),
    m_versionStatus(ApplicationVersionLifecycle::NOT_SET),
    m_versionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationVersion"))
  {
    m_applicationVersion = jsonValue.GetInteger("applicationVersion");

    m_applicationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatus"))
  {
    m_deploymentStatus = ApplicationDeploymentLifecycleMapper::GetApplicationDeploymentLifecycleForName(jsonValue.GetString("deploymentStatus"));

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");

    m_lastStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ApplicationLifecycleMapper::GetApplicationLifecycleForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionStatus"))
  {
    m_versionStatus = ApplicationVersionLifecycleMapper::GetApplicationVersionLifecycleForName(jsonValue.GetString("versionStatus"));

    m_versionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithInteger("applicationVersion", m_applicationVersion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("deploymentStatus", ApplicationDeploymentLifecycleMapper::GetNameForApplicationDeploymentLifecycle(m_deploymentStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_lastStartTimeHasBeenSet)
  {
   payload.WithDouble("lastStartTime", m_lastStartTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ApplicationLifecycleMapper::GetNameForApplicationLifecycle(m_status));
  }

  if(m_versionStatusHasBeenSet)
  {
   payload.WithString("versionStatus", ApplicationVersionLifecycleMapper::GetNameForApplicationVersionLifecycle(m_versionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

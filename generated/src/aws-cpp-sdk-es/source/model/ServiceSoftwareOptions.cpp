/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ServiceSoftwareOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ServiceSoftwareOptions::ServiceSoftwareOptions() : 
    m_currentVersionHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_updateAvailable(false),
    m_updateAvailableHasBeenSet(false),
    m_cancellable(false),
    m_cancellableHasBeenSet(false),
    m_updateStatus(DeploymentStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_automatedUpdateDateHasBeenSet(false),
    m_optionalDeployment(false),
    m_optionalDeploymentHasBeenSet(false)
{
}

ServiceSoftwareOptions::ServiceSoftwareOptions(JsonView jsonValue) : 
    m_currentVersionHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_updateAvailable(false),
    m_updateAvailableHasBeenSet(false),
    m_cancellable(false),
    m_cancellableHasBeenSet(false),
    m_updateStatus(DeploymentStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_automatedUpdateDateHasBeenSet(false),
    m_optionalDeployment(false),
    m_optionalDeploymentHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSoftwareOptions& ServiceSoftwareOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentVersion"))
  {
    m_currentVersion = jsonValue.GetString("CurrentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewVersion"))
  {
    m_newVersion = jsonValue.GetString("NewVersion");

    m_newVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateAvailable"))
  {
    m_updateAvailable = jsonValue.GetBool("UpdateAvailable");

    m_updateAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cancellable"))
  {
    m_cancellable = jsonValue.GetBool("Cancellable");

    m_cancellableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("UpdateStatus"));

    m_updateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutomatedUpdateDate"))
  {
    m_automatedUpdateDate = jsonValue.GetDouble("AutomatedUpdateDate");

    m_automatedUpdateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptionalDeployment"))
  {
    m_optionalDeployment = jsonValue.GetBool("OptionalDeployment");

    m_optionalDeploymentHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSoftwareOptions::Jsonize() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  if(m_newVersionHasBeenSet)
  {
   payload.WithString("NewVersion", m_newVersion);

  }

  if(m_updateAvailableHasBeenSet)
  {
   payload.WithBool("UpdateAvailable", m_updateAvailable);

  }

  if(m_cancellableHasBeenSet)
  {
   payload.WithBool("Cancellable", m_cancellable);

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_updateStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_automatedUpdateDateHasBeenSet)
  {
   payload.WithDouble("AutomatedUpdateDate", m_automatedUpdateDate.SecondsWithMSPrecision());
  }

  if(m_optionalDeploymentHasBeenSet)
  {
   payload.WithBool("OptionalDeployment", m_optionalDeployment);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

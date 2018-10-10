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
    m_automatedUpdateDateHasBeenSet(false)
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
    m_automatedUpdateDateHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

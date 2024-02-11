/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/AutoScalingConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

AutoScalingConfigurationSummary::AutoScalingConfigurationSummary() : 
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_autoScalingConfigurationNameHasBeenSet(false),
    m_autoScalingConfigurationRevision(0),
    m_autoScalingConfigurationRevisionHasBeenSet(false),
    m_status(AutoScalingConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_hasAssociatedService(false),
    m_hasAssociatedServiceHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
}

AutoScalingConfigurationSummary::AutoScalingConfigurationSummary(JsonView jsonValue) : 
    m_autoScalingConfigurationArnHasBeenSet(false),
    m_autoScalingConfigurationNameHasBeenSet(false),
    m_autoScalingConfigurationRevision(0),
    m_autoScalingConfigurationRevisionHasBeenSet(false),
    m_status(AutoScalingConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_hasAssociatedService(false),
    m_hasAssociatedServiceHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingConfigurationSummary& AutoScalingConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoScalingConfigurationArn"))
  {
    m_autoScalingConfigurationArn = jsonValue.GetString("AutoScalingConfigurationArn");

    m_autoScalingConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingConfigurationName"))
  {
    m_autoScalingConfigurationName = jsonValue.GetString("AutoScalingConfigurationName");

    m_autoScalingConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingConfigurationRevision"))
  {
    m_autoScalingConfigurationRevision = jsonValue.GetInteger("AutoScalingConfigurationRevision");

    m_autoScalingConfigurationRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AutoScalingConfigurationStatusMapper::GetAutoScalingConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasAssociatedService"))
  {
    m_hasAssociatedService = jsonValue.GetBool("HasAssociatedService");

    m_hasAssociatedServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");

    m_isDefaultHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_autoScalingConfigurationArnHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationArn", m_autoScalingConfigurationArn);

  }

  if(m_autoScalingConfigurationNameHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationName", m_autoScalingConfigurationName);

  }

  if(m_autoScalingConfigurationRevisionHasBeenSet)
  {
   payload.WithInteger("AutoScalingConfigurationRevision", m_autoScalingConfigurationRevision);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AutoScalingConfigurationStatusMapper::GetNameForAutoScalingConfigurationStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_hasAssociatedServiceHasBeenSet)
  {
   payload.WithBool("HasAssociatedService", m_hasAssociatedService);

  }

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("IsDefault", m_isDefault);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws

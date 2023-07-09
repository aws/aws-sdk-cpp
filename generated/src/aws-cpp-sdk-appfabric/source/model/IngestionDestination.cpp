/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/IngestionDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

IngestionDestination::IngestionDestination() : 
    m_arnHasBeenSet(false),
    m_ingestionArnHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_status(IngestionDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

IngestionDestination::IngestionDestination(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_ingestionArnHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_status(IngestionDestinationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionDestination& IngestionDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionArn"))
  {
    m_ingestionArn = jsonValue.GetString("ingestionArn");

    m_ingestionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("processingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("processingConfiguration");

    m_processingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationConfiguration"))
  {
    m_destinationConfiguration = jsonValue.GetObject("destinationConfiguration");

    m_destinationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IngestionDestinationStatusMapper::GetIngestionDestinationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionDestination::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_ingestionArnHasBeenSet)
  {
   payload.WithString("ingestionArn", m_ingestionArn);

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("processingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IngestionDestinationStatusMapper::GetNameForIngestionDestinationStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws

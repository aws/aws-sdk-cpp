/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Ingestion.h>
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

Ingestion::Ingestion() : 
    m_arnHasBeenSet(false),
    m_appBundleArnHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_state(IngestionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_ingestionType(IngestionType::NOT_SET),
    m_ingestionTypeHasBeenSet(false)
{
}

Ingestion::Ingestion(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_appBundleArnHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_state(IngestionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_ingestionType(IngestionType::NOT_SET),
    m_ingestionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Ingestion& Ingestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appBundleArn"))
  {
    m_appBundleArn = jsonValue.GetString("appBundleArn");

    m_appBundleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("app"))
  {
    m_app = jsonValue.GetString("app");

    m_appHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tenantId"))
  {
    m_tenantId = jsonValue.GetString("tenantId");

    m_tenantIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = IngestionStateMapper::GetIngestionStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionType"))
  {
    m_ingestionType = IngestionTypeMapper::GetIngestionTypeForName(jsonValue.GetString("ingestionType"));

    m_ingestionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Ingestion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_appBundleArnHasBeenSet)
  {
   payload.WithString("appBundleArn", m_appBundleArn);

  }

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("tenantId", m_tenantId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", IngestionStateMapper::GetNameForIngestionState(m_state));
  }

  if(m_ingestionTypeHasBeenSet)
  {
   payload.WithString("ingestionType", IngestionTypeMapper::GetNameForIngestionType(m_ingestionType));
  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws

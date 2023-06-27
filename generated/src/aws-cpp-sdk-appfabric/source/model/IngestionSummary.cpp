/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/IngestionSummary.h>
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

IngestionSummary::IngestionSummary() : 
    m_arnHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_state(IngestionState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

IngestionSummary::IngestionSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_state(IngestionState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionSummary& IngestionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = IngestionStateMapper::GetIngestionStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("tenantId", m_tenantId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", IngestionStateMapper::GetNameForIngestionState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws

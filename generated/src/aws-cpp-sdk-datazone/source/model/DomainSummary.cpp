/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DomainSummary::DomainSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_managedAccountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portalUrlHasBeenSet(false),
    m_status(DomainStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DomainSummary::DomainSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_managedAccountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portalUrlHasBeenSet(false),
    m_status(DomainStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSummary& DomainSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedAccountId"))
  {
    m_managedAccountId = jsonValue.GetString("managedAccountId");

    m_managedAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portalUrl"))
  {
    m_portalUrl = jsonValue.GetString("portalUrl");

    m_portalUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_managedAccountIdHasBeenSet)
  {
   payload.WithString("managedAccountId", m_managedAccountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_portalUrlHasBeenSet)
  {
   payload.WithString("portalUrl", m_portalUrl);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DomainStatusMapper::GetNameForDomainStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

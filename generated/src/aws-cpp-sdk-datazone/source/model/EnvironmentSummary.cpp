/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentSummary.h>
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

EnvironmentSummary::EnvironmentSummary() : 
    m_awsAccountIdHasBeenSet(false),
    m_awsAccountRegionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_environmentProfileIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

EnvironmentSummary::EnvironmentSummary(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_awsAccountRegionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_environmentProfileIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentSummary& EnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountRegion"))
  {
    m_awsAccountRegion = jsonValue.GetString("awsAccountRegion");

    m_awsAccountRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentProfileId"))
  {
    m_environmentProfileId = jsonValue.GetString("environmentProfileId");

    m_environmentProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsAccountRegionHasBeenSet)
  {
   payload.WithString("awsAccountRegion", m_awsAccountRegion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_environmentProfileIdHasBeenSet)
  {
   payload.WithString("environmentProfileId", m_environmentProfileId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnvironmentStatusMapper::GetNameForEnvironmentStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

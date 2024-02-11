/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AppAuthorizationSummary.h>
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

AppAuthorizationSummary::AppAuthorizationSummary() : 
    m_appAuthorizationArnHasBeenSet(false),
    m_appBundleArnHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantHasBeenSet(false),
    m_status(AppAuthorizationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

AppAuthorizationSummary::AppAuthorizationSummary(JsonView jsonValue) : 
    m_appAuthorizationArnHasBeenSet(false),
    m_appBundleArnHasBeenSet(false),
    m_appHasBeenSet(false),
    m_tenantHasBeenSet(false),
    m_status(AppAuthorizationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AppAuthorizationSummary& AppAuthorizationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appAuthorizationArn"))
  {
    m_appAuthorizationArn = jsonValue.GetString("appAuthorizationArn");

    m_appAuthorizationArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("tenant"))
  {
    m_tenant = jsonValue.GetObject("tenant");

    m_tenantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AppAuthorizationStatusMapper::GetAppAuthorizationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AppAuthorizationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appAuthorizationArnHasBeenSet)
  {
   payload.WithString("appAuthorizationArn", m_appAuthorizationArn);

  }

  if(m_appBundleArnHasBeenSet)
  {
   payload.WithString("appBundleArn", m_appBundleArn);

  }

  if(m_appHasBeenSet)
  {
   payload.WithString("app", m_app);

  }

  if(m_tenantHasBeenSet)
  {
   payload.WithObject("tenant", m_tenant.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AppAuthorizationStatusMapper::GetNameForAppAuthorizationStatus(m_status));
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

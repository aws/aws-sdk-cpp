/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/MonitorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

MonitorSummary::MonitorSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitorSummary& MonitorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("monitorId"))
  {
    m_monitorId = jsonValue.GetString("monitorId");
    m_monitorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subdomain"))
  {
    m_subdomain = jsonValue.GetString("subdomain");
    m_subdomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityCenterInstanceArn"))
  {
    m_identityCenterInstanceArn = jsonValue.GetString("identityCenterInstanceArn");
    m_identityCenterInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityCenterApplicationArn"))
  {
    m_identityCenterApplicationArn = jsonValue.GetString("identityCenterApplicationArn");
    m_identityCenterApplicationArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitorIdHasBeenSet)
  {
   payload.WithString("monitorId", m_monitorId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_subdomainHasBeenSet)
  {
   payload.WithString("subdomain", m_subdomain);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("identityCenterInstanceArn", m_identityCenterInstanceArn);

  }

  if(m_identityCenterApplicationArnHasBeenSet)
  {
   payload.WithString("identityCenterApplicationArn", m_identityCenterApplicationArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ConfiguredTeam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

ConfiguredTeam::ConfiguredTeam() : 
    m_tenantIdHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false)
{
}

ConfiguredTeam::ConfiguredTeam(JsonView jsonValue) : 
    m_tenantIdHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false)
{
  *this = jsonValue;
}

ConfiguredTeam& ConfiguredTeam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TenantId"))
  {
    m_tenantId = jsonValue.GetString("TenantId");

    m_tenantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamId"))
  {
    m_teamId = jsonValue.GetString("TeamId");

    m_teamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamName"))
  {
    m_teamName = jsonValue.GetString("TeamName");

    m_teamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfiguredTeam::Jsonize() const
{
  JsonValue payload;

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("TenantId", m_tenantId);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  if(m_teamNameHasBeenSet)
  {
   payload.WithString("TeamName", m_teamName);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws

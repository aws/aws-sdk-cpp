/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/SamlProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

SamlProperties::SamlProperties() : 
    m_status(SamlStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_userAccessUrlHasBeenSet(false),
    m_relayStateParameterNameHasBeenSet(false)
{
}

SamlProperties::SamlProperties(JsonView jsonValue) : 
    m_status(SamlStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_userAccessUrlHasBeenSet(false),
    m_relayStateParameterNameHasBeenSet(false)
{
  *this = jsonValue;
}

SamlProperties& SamlProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SamlStatusEnumMapper::GetSamlStatusEnumForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserAccessUrl"))
  {
    m_userAccessUrl = jsonValue.GetString("UserAccessUrl");

    m_userAccessUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelayStateParameterName"))
  {
    m_relayStateParameterName = jsonValue.GetString("RelayStateParameterName");

    m_relayStateParameterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SamlProperties::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SamlStatusEnumMapper::GetNameForSamlStatusEnum(m_status));
  }

  if(m_userAccessUrlHasBeenSet)
  {
   payload.WithString("UserAccessUrl", m_userAccessUrl);

  }

  if(m_relayStateParameterNameHasBeenSet)
  {
   payload.WithString("RelayStateParameterName", m_relayStateParameterName);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

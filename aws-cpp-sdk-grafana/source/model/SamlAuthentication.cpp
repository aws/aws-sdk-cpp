/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/SamlAuthentication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

SamlAuthentication::SamlAuthentication() : 
    m_configurationHasBeenSet(false),
    m_status(SamlConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SamlAuthentication::SamlAuthentication(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_status(SamlConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SamlAuthentication& SamlAuthentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SamlConfigurationStatusMapper::GetSamlConfigurationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SamlAuthentication::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SamlConfigurationStatusMapper::GetNameForSamlConfigurationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws

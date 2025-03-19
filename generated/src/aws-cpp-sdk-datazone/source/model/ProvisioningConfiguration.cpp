/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProvisioningConfiguration.h>
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

ProvisioningConfiguration::ProvisioningConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisioningConfiguration& ProvisioningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lakeFormationConfiguration"))
  {
    m_lakeFormationConfiguration = jsonValue.GetObject("lakeFormationConfiguration");
    m_lakeFormationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisioningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lakeFormationConfigurationHasBeenSet)
  {
   payload.WithObject("lakeFormationConfiguration", m_lakeFormationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

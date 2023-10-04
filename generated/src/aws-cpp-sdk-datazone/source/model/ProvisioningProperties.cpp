/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProvisioningProperties.h>
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

ProvisioningProperties::ProvisioningProperties() : 
    m_cloudFormationHasBeenSet(false)
{
}

ProvisioningProperties::ProvisioningProperties(JsonView jsonValue) : 
    m_cloudFormationHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningProperties& ProvisioningProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudFormation"))
  {
    m_cloudFormation = jsonValue.GetObject("cloudFormation");

    m_cloudFormationHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningProperties::Jsonize() const
{
  JsonValue payload;

  if(m_cloudFormationHasBeenSet)
  {
   payload.WithObject("cloudFormation", m_cloudFormation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

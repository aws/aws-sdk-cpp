/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/FleetConfiguration.h>
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

FleetConfiguration::FleetConfiguration() : 
    m_customerManagedHasBeenSet(false),
    m_serviceManagedEc2HasBeenSet(false)
{
}

FleetConfiguration::FleetConfiguration(JsonView jsonValue) : 
    m_customerManagedHasBeenSet(false),
    m_serviceManagedEc2HasBeenSet(false)
{
  *this = jsonValue;
}

FleetConfiguration& FleetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerManaged"))
  {
    m_customerManaged = jsonValue.GetObject("customerManaged");

    m_customerManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceManagedEc2"))
  {
    m_serviceManagedEc2 = jsonValue.GetObject("serviceManagedEc2");

    m_serviceManagedEc2HasBeenSet = true;
  }

  return *this;
}

JsonValue FleetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customerManagedHasBeenSet)
  {
   payload.WithObject("customerManaged", m_customerManaged.Jsonize());

  }

  if(m_serviceManagedEc2HasBeenSet)
  {
   payload.WithObject("serviceManagedEc2", m_serviceManagedEc2.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws

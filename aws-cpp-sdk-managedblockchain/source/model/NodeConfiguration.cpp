/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NodeConfiguration::NodeConfiguration() : 
    m_instanceTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false),
    m_stateDB(StateDBType::NOT_SET),
    m_stateDBHasBeenSet(false)
{
}

NodeConfiguration::NodeConfiguration(JsonView jsonValue) : 
    m_instanceTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false),
    m_stateDB(StateDBType::NOT_SET),
    m_stateDBHasBeenSet(false)
{
  *this = jsonValue;
}

NodeConfiguration& NodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingConfiguration"))
  {
    m_logPublishingConfiguration = jsonValue.GetObject("LogPublishingConfiguration");

    m_logPublishingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateDB"))
  {
    m_stateDB = StateDBTypeMapper::GetStateDBTypeForName(jsonValue.GetString("StateDB"));

    m_stateDBHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_logPublishingConfigurationHasBeenSet)
  {
   payload.WithObject("LogPublishingConfiguration", m_logPublishingConfiguration.Jsonize());

  }

  if(m_stateDBHasBeenSet)
  {
   payload.WithString("StateDB", StateDBTypeMapper::GetNameForStateDBType(m_stateDB));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

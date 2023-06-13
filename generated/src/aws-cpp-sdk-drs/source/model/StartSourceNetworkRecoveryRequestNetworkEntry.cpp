/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/StartSourceNetworkRecoveryRequestNetworkEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

StartSourceNetworkRecoveryRequestNetworkEntry::StartSourceNetworkRecoveryRequestNetworkEntry() : 
    m_cfnStackNameHasBeenSet(false),
    m_sourceNetworkIDHasBeenSet(false)
{
}

StartSourceNetworkRecoveryRequestNetworkEntry::StartSourceNetworkRecoveryRequestNetworkEntry(JsonView jsonValue) : 
    m_cfnStackNameHasBeenSet(false),
    m_sourceNetworkIDHasBeenSet(false)
{
  *this = jsonValue;
}

StartSourceNetworkRecoveryRequestNetworkEntry& StartSourceNetworkRecoveryRequestNetworkEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cfnStackName"))
  {
    m_cfnStackName = jsonValue.GetString("cfnStackName");

    m_cfnStackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceNetworkID"))
  {
    m_sourceNetworkID = jsonValue.GetString("sourceNetworkID");

    m_sourceNetworkIDHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSourceNetworkRecoveryRequestNetworkEntry::Jsonize() const
{
  JsonValue payload;

  if(m_cfnStackNameHasBeenSet)
  {
   payload.WithString("cfnStackName", m_cfnStackName);

  }

  if(m_sourceNetworkIDHasBeenSet)
  {
   payload.WithString("sourceNetworkID", m_sourceNetworkID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

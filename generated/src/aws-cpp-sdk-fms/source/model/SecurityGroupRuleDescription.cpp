/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/SecurityGroupRuleDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

SecurityGroupRuleDescription::SecurityGroupRuleDescription() : 
    m_iPV4RangeHasBeenSet(false),
    m_iPV6RangeHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false)
{
}

SecurityGroupRuleDescription::SecurityGroupRuleDescription(JsonView jsonValue) : 
    m_iPV4RangeHasBeenSet(false),
    m_iPV6RangeHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityGroupRuleDescription& SecurityGroupRuleDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPV4Range"))
  {
    m_iPV4Range = jsonValue.GetString("IPV4Range");

    m_iPV4RangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPV6Range"))
  {
    m_iPV6Range = jsonValue.GetString("IPV6Range");

    m_iPV6RangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrefixListId"))
  {
    m_prefixListId = jsonValue.GetString("PrefixListId");

    m_prefixListIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromPort"))
  {
    m_fromPort = jsonValue.GetInt64("FromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToPort"))
  {
    m_toPort = jsonValue.GetInt64("ToPort");

    m_toPortHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityGroupRuleDescription::Jsonize() const
{
  JsonValue payload;

  if(m_iPV4RangeHasBeenSet)
  {
   payload.WithString("IPV4Range", m_iPV4Range);

  }

  if(m_iPV6RangeHasBeenSet)
  {
   payload.WithString("IPV6Range", m_iPV6Range);

  }

  if(m_prefixListIdHasBeenSet)
  {
   payload.WithString("PrefixListId", m_prefixListId);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_fromPortHasBeenSet)
  {
   payload.WithInt64("FromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInt64("ToPort", m_toPort);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws

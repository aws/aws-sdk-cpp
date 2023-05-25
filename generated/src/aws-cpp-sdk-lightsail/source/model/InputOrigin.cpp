/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InputOrigin.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

InputOrigin::InputOrigin() : 
    m_nameHasBeenSet(false),
    m_regionName(RegionName::NOT_SET),
    m_regionNameHasBeenSet(false),
    m_protocolPolicy(OriginProtocolPolicyEnum::NOT_SET),
    m_protocolPolicyHasBeenSet(false)
{
}

InputOrigin::InputOrigin(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_regionName(RegionName::NOT_SET),
    m_regionNameHasBeenSet(false),
    m_protocolPolicy(OriginProtocolPolicyEnum::NOT_SET),
    m_protocolPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

InputOrigin& InputOrigin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = RegionNameMapper::GetRegionNameForName(jsonValue.GetString("regionName"));

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocolPolicy"))
  {
    m_protocolPolicy = OriginProtocolPolicyEnumMapper::GetOriginProtocolPolicyEnumForName(jsonValue.GetString("protocolPolicy"));

    m_protocolPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue InputOrigin::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", RegionNameMapper::GetNameForRegionName(m_regionName));
  }

  if(m_protocolPolicyHasBeenSet)
  {
   payload.WithString("protocolPolicy", OriginProtocolPolicyEnumMapper::GetNameForOriginProtocolPolicyEnum(m_protocolPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

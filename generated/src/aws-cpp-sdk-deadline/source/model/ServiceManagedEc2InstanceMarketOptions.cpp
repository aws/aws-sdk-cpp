/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ServiceManagedEc2InstanceMarketOptions.h>
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

ServiceManagedEc2InstanceMarketOptions::ServiceManagedEc2InstanceMarketOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceManagedEc2InstanceMarketOptions& ServiceManagedEc2InstanceMarketOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = Ec2MarketTypeMapper::GetEc2MarketTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceManagedEc2InstanceMarketOptions::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", Ec2MarketTypeMapper::GetNameForEc2MarketType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws

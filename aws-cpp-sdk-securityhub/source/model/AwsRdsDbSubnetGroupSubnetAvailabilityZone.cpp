/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbSubnetGroupSubnetAvailabilityZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsDbSubnetGroupSubnetAvailabilityZone::AwsRdsDbSubnetGroupSubnetAvailabilityZone() : 
    m_nameHasBeenSet(false)
{
}

AwsRdsDbSubnetGroupSubnetAvailabilityZone::AwsRdsDbSubnetGroupSubnetAvailabilityZone(JsonView jsonValue) : 
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbSubnetGroupSubnetAvailabilityZone& AwsRdsDbSubnetGroupSubnetAvailabilityZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbSubnetGroupSubnetAvailabilityZone::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

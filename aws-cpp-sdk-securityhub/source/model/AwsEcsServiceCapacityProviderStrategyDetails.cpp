/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceCapacityProviderStrategyDetails.h>
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

AwsEcsServiceCapacityProviderStrategyDetails::AwsEcsServiceCapacityProviderStrategyDetails() : 
    m_base(0),
    m_baseHasBeenSet(false),
    m_capacityProviderHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

AwsEcsServiceCapacityProviderStrategyDetails::AwsEcsServiceCapacityProviderStrategyDetails(JsonView jsonValue) : 
    m_base(0),
    m_baseHasBeenSet(false),
    m_capacityProviderHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceCapacityProviderStrategyDetails& AwsEcsServiceCapacityProviderStrategyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Base"))
  {
    m_base = jsonValue.GetInteger("Base");

    m_baseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityProvider"))
  {
    m_capacityProvider = jsonValue.GetString("CapacityProvider");

    m_capacityProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetInteger("Weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceCapacityProviderStrategyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_baseHasBeenSet)
  {
   payload.WithInteger("Base", m_base);

  }

  if(m_capacityProviderHasBeenSet)
  {
   payload.WithString("CapacityProvider", m_capacityProvider);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("Weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ConsumptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

ConsumptionConfiguration::ConsumptionConfiguration() : 
    m_renewType(RenewType::NOT_SET),
    m_renewTypeHasBeenSet(false),
    m_provisionalConfigurationHasBeenSet(false),
    m_borrowConfigurationHasBeenSet(false)
{
}

ConsumptionConfiguration::ConsumptionConfiguration(JsonView jsonValue) : 
    m_renewType(RenewType::NOT_SET),
    m_renewTypeHasBeenSet(false),
    m_provisionalConfigurationHasBeenSet(false),
    m_borrowConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConsumptionConfiguration& ConsumptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RenewType"))
  {
    m_renewType = RenewTypeMapper::GetRenewTypeForName(jsonValue.GetString("RenewType"));

    m_renewTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionalConfiguration"))
  {
    m_provisionalConfiguration = jsonValue.GetObject("ProvisionalConfiguration");

    m_provisionalConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BorrowConfiguration"))
  {
    m_borrowConfiguration = jsonValue.GetObject("BorrowConfiguration");

    m_borrowConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConsumptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_renewTypeHasBeenSet)
  {
   payload.WithString("RenewType", RenewTypeMapper::GetNameForRenewType(m_renewType));
  }

  if(m_provisionalConfigurationHasBeenSet)
  {
   payload.WithObject("ProvisionalConfiguration", m_provisionalConfiguration.Jsonize());

  }

  if(m_borrowConfigurationHasBeenSet)
  {
   payload.WithObject("BorrowConfiguration", m_borrowConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

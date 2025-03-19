/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ConsumedLicenseSummary.h>
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

ConsumedLicenseSummary::ConsumedLicenseSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsumedLicenseSummary& ConsumedLicenseSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumedLicenses"))
  {
    m_consumedLicenses = jsonValue.GetInt64("ConsumedLicenses");
    m_consumedLicensesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumedLicenseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_consumedLicensesHasBeenSet)
  {
   payload.WithInt64("ConsumedLicenses", m_consumedLicenses);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

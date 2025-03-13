/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PrivacyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

PrivacyConfiguration::PrivacyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivacyConfiguration& PrivacyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policies"))
  {
    m_policies = jsonValue.GetObject("policies");
    m_policiesHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivacyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_policiesHasBeenSet)
  {
   payload.WithObject("policies", m_policies.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws

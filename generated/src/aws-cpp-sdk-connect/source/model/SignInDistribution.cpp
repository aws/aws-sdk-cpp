/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SignInDistribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SignInDistribution::SignInDistribution() : 
    m_regionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

SignInDistribution::SignInDistribution(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

SignInDistribution& SignInDistribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue SignInDistribution::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

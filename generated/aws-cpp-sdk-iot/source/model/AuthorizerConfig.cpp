/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuthorizerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuthorizerConfig::AuthorizerConfig() : 
    m_defaultAuthorizerNameHasBeenSet(false),
    m_allowAuthorizerOverride(false),
    m_allowAuthorizerOverrideHasBeenSet(false)
{
}

AuthorizerConfig::AuthorizerConfig(JsonView jsonValue) : 
    m_defaultAuthorizerNameHasBeenSet(false),
    m_allowAuthorizerOverride(false),
    m_allowAuthorizerOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizerConfig& AuthorizerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultAuthorizerName"))
  {
    m_defaultAuthorizerName = jsonValue.GetString("defaultAuthorizerName");

    m_defaultAuthorizerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowAuthorizerOverride"))
  {
    m_allowAuthorizerOverride = jsonValue.GetBool("allowAuthorizerOverride");

    m_allowAuthorizerOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_defaultAuthorizerNameHasBeenSet)
  {
   payload.WithString("defaultAuthorizerName", m_defaultAuthorizerName);

  }

  if(m_allowAuthorizerOverrideHasBeenSet)
  {
   payload.WithBool("allowAuthorizerOverride", m_allowAuthorizerOverride);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

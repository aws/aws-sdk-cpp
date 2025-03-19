/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateWebAppIdentityCenterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

UpdateWebAppIdentityCenterConfig::UpdateWebAppIdentityCenterConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateWebAppIdentityCenterConfig& UpdateWebAppIdentityCenterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateWebAppIdentityCenterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

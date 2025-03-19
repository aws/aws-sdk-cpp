/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/IdentityCenterConfig.h>
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

IdentityCenterConfig::IdentityCenterConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityCenterConfig& IdentityCenterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

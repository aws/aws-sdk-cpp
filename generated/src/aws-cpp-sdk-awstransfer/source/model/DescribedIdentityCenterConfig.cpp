/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedIdentityCenterConfig.h>
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

DescribedIdentityCenterConfig::DescribedIdentityCenterConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribedIdentityCenterConfig& DescribedIdentityCenterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
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

JsonValue DescribedIdentityCenterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

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

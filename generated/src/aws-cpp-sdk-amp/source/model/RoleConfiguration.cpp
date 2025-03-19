/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/RoleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

RoleConfiguration::RoleConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RoleConfiguration& RoleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceRoleArn"))
  {
    m_sourceRoleArn = jsonValue.GetString("sourceRoleArn");
    m_sourceRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetRoleArn"))
  {
    m_targetRoleArn = jsonValue.GetString("targetRoleArn");
    m_targetRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RoleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceRoleArnHasBeenSet)
  {
   payload.WithString("sourceRoleArn", m_sourceRoleArn);

  }

  if(m_targetRoleArnHasBeenSet)
  {
   payload.WithString("targetRoleArn", m_targetRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

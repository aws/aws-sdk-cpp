/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/VpcLatticeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

VpcLatticeConfiguration::VpcLatticeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcLatticeConfiguration& VpcLatticeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetGroupArn"))
  {
    m_targetGroupArn = jsonValue.GetString("targetGroupArn");
    m_targetGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portName"))
  {
    m_portName = jsonValue.GetString("portName");
    m_portNameHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcLatticeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_targetGroupArnHasBeenSet)
  {
   payload.WithString("targetGroupArn", m_targetGroupArn);

  }

  if(m_portNameHasBeenSet)
  {
   payload.WithString("portName", m_portName);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws

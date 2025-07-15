/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/AdvancedConfiguration.h>
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

AdvancedConfiguration::AdvancedConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AdvancedConfiguration& AdvancedConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alternateTargetGroupArn"))
  {
    m_alternateTargetGroupArn = jsonValue.GetString("alternateTargetGroupArn");
    m_alternateTargetGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productionListenerRule"))
  {
    m_productionListenerRule = jsonValue.GetString("productionListenerRule");
    m_productionListenerRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testListenerRule"))
  {
    m_testListenerRule = jsonValue.GetString("testListenerRule");
    m_testListenerRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AdvancedConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_alternateTargetGroupArnHasBeenSet)
  {
   payload.WithString("alternateTargetGroupArn", m_alternateTargetGroupArn);

  }

  if(m_productionListenerRuleHasBeenSet)
  {
   payload.WithString("productionListenerRule", m_productionListenerRule);

  }

  if(m_testListenerRuleHasBeenSet)
  {
   payload.WithString("testListenerRule", m_testListenerRule);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws

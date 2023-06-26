/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/AutoScalingGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

AutoScalingGroup::AutoScalingGroup() : 
    m_nameHasBeenSet(false),
    m_hookHasBeenSet(false)
{
}

AutoScalingGroup::AutoScalingGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_hookHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroup& AutoScalingGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hook"))
  {
    m_hook = jsonValue.GetString("hook");

    m_hookHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_hookHasBeenSet)
  {
   payload.WithString("hook", m_hook);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

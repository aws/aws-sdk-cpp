/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AutoScalingGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AutoScalingGroup::AutoScalingGroup() : 
    m_nameHasBeenSet(false)
{
}

AutoScalingGroup::AutoScalingGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false)
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

  return *this;
}

JsonValue AutoScalingGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws

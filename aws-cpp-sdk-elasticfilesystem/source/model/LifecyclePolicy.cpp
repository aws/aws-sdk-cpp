/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/LifecyclePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

LifecyclePolicy::LifecyclePolicy() : 
    m_transitionToIA(TransitionToIARules::NOT_SET),
    m_transitionToIAHasBeenSet(false)
{
}

LifecyclePolicy::LifecyclePolicy(JsonView jsonValue) : 
    m_transitionToIA(TransitionToIARules::NOT_SET),
    m_transitionToIAHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicy& LifecyclePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransitionToIA"))
  {
    m_transitionToIA = TransitionToIARulesMapper::GetTransitionToIARulesForName(jsonValue.GetString("TransitionToIA"));

    m_transitionToIAHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_transitionToIAHasBeenSet)
  {
   payload.WithString("TransitionToIA", TransitionToIARulesMapper::GetNameForTransitionToIARules(m_transitionToIA));
  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws

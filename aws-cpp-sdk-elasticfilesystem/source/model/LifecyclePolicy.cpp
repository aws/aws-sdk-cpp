/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

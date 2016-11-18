/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

AutoScalingGroup::AutoScalingGroup(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_hookHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroup& AutoScalingGroup::operator =(const JsonValue& jsonValue)
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
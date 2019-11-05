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

#include <aws/codestar-notifications/model/Target.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

Target::Target() : 
    m_targetTypeHasBeenSet(false),
    m_targetAddressHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_targetTypeHasBeenSet(false),
    m_targetAddressHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = jsonValue.GetString("TargetType");

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetAddress"))
  {
    m_targetAddress = jsonValue.GetString("TargetAddress");

    m_targetAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

  }

  if(m_targetAddressHasBeenSet)
  {
   payload.WithString("TargetAddress", m_targetAddress);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

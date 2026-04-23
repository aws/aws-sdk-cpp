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

#include <aws/xray/model/Group.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Group::Group() : 
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_filterExpressionHasBeenSet(false)
{
}

Group::Group(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_filterExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupARN"))
  {
    m_groupARN = jsonValue.GetString("GroupARN");

    m_groupARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterExpression"))
  {
    m_filterExpression = jsonValue.GetString("FilterExpression");

    m_filterExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupARNHasBeenSet)
  {
   payload.WithString("GroupARN", m_groupARN);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws

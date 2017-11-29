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

#include <aws/iot/model/GroupNameAndArn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

GroupNameAndArn::GroupNameAndArn() : 
    m_groupNameHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
}

GroupNameAndArn::GroupNameAndArn(const JsonValue& jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
  *this = jsonValue;
}

GroupNameAndArn& GroupNameAndArn::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupArn"))
  {
    m_groupArn = jsonValue.GetString("groupArn");

    m_groupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupNameAndArn::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("groupArn", m_groupArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

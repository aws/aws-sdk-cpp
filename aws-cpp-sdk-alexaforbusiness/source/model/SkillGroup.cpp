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

#include <aws/alexaforbusiness/model/SkillGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

SkillGroup::SkillGroup() : 
    m_skillGroupArnHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SkillGroup::SkillGroup(const JsonValue& jsonValue) : 
    m_skillGroupArnHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SkillGroup& SkillGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SkillGroupArn"))
  {
    m_skillGroupArn = jsonValue.GetString("SkillGroupArn");

    m_skillGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkillGroupName"))
  {
    m_skillGroupName = jsonValue.GetString("SkillGroupName");

    m_skillGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SkillGroup::Jsonize() const
{
  JsonValue payload;

  if(m_skillGroupArnHasBeenSet)
  {
   payload.WithString("SkillGroupArn", m_skillGroupArn);

  }

  if(m_skillGroupNameHasBeenSet)
  {
   payload.WithString("SkillGroupName", m_skillGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SkillGroupData.h>
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

SkillGroupData::SkillGroupData() : 
    m_skillGroupArnHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SkillGroupData::SkillGroupData(JsonView jsonValue) : 
    m_skillGroupArnHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SkillGroupData& SkillGroupData::operator =(JsonView jsonValue)
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

JsonValue SkillGroupData::Jsonize() const
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

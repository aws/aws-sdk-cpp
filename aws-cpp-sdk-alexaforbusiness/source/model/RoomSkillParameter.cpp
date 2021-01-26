/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/RoomSkillParameter.h>
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

RoomSkillParameter::RoomSkillParameter() : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
}

RoomSkillParameter::RoomSkillParameter(JsonView jsonValue) : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
  *this = jsonValue;
}

RoomSkillParameter& RoomSkillParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterKey"))
  {
    m_parameterKey = jsonValue.GetString("ParameterKey");

    m_parameterKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterValue"))
  {
    m_parameterValue = jsonValue.GetString("ParameterValue");

    m_parameterValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RoomSkillParameter::Jsonize() const
{
  JsonValue payload;

  if(m_parameterKeyHasBeenSet)
  {
   payload.WithString("ParameterKey", m_parameterKey);

  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("ParameterValue", m_parameterValue);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

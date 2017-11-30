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

RoomSkillParameter::RoomSkillParameter(const JsonValue& jsonValue) : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false)
{
  *this = jsonValue;
}

RoomSkillParameter& RoomSkillParameter::operator =(const JsonValue& jsonValue)
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

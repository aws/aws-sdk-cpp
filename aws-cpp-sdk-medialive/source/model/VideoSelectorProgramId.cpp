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

#include <aws/medialive/model/VideoSelectorProgramId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

VideoSelectorProgramId::VideoSelectorProgramId() : 
    m_programId(0),
    m_programIdHasBeenSet(false)
{
}

VideoSelectorProgramId::VideoSelectorProgramId(const JsonValue& jsonValue) : 
    m_programId(0),
    m_programIdHasBeenSet(false)
{
  *this = jsonValue;
}

VideoSelectorProgramId& VideoSelectorProgramId::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("programId"))
  {
    m_programId = jsonValue.GetInteger("programId");

    m_programIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoSelectorProgramId::Jsonize() const
{
  JsonValue payload;

  if(m_programIdHasBeenSet)
  {
   payload.WithInteger("programId", m_programId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

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

#include <aws/connectparticipant/model/StartPosition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

StartPosition::StartPosition() : 
    m_idHasBeenSet(false),
    m_absoluteTimeHasBeenSet(false),
    m_mostRecent(0),
    m_mostRecentHasBeenSet(false)
{
}

StartPosition::StartPosition(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_absoluteTimeHasBeenSet(false),
    m_mostRecent(0),
    m_mostRecentHasBeenSet(false)
{
  *this = jsonValue;
}

StartPosition& StartPosition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AbsoluteTime"))
  {
    m_absoluteTime = jsonValue.GetString("AbsoluteTime");

    m_absoluteTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MostRecent"))
  {
    m_mostRecent = jsonValue.GetInteger("MostRecent");

    m_mostRecentHasBeenSet = true;
  }

  return *this;
}

JsonValue StartPosition::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_absoluteTimeHasBeenSet)
  {
   payload.WithString("AbsoluteTime", m_absoluteTime);

  }

  if(m_mostRecentHasBeenSet)
  {
   payload.WithInteger("MostRecent", m_mostRecent);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws

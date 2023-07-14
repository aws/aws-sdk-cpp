/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

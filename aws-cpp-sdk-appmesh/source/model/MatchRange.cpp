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

#include <aws/appmesh/model/MatchRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

MatchRange::MatchRange() : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
}

MatchRange::MatchRange(JsonView jsonValue) : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

MatchRange& MatchRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetInt64("end");

    m_endHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetInt64("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchRange::Jsonize() const
{
  JsonValue payload;

  if(m_endHasBeenSet)
  {
   payload.WithInt64("end", m_end);

  }

  if(m_startHasBeenSet)
  {
   payload.WithInt64("start", m_start);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

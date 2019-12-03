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

#include <aws/codeguruprofiler/model/ProfileTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

ProfileTime::ProfileTime() : 
    m_startHasBeenSet(false)
{
}

ProfileTime::ProfileTime(JsonView jsonValue) : 
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileTime& ProfileTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileTime::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithString("start", m_start.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

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

#include <aws/macie2/model/GroupCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

GroupCount::GroupCount() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_groupKeyHasBeenSet(false)
{
}

GroupCount::GroupCount(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_groupKeyHasBeenSet(false)
{
  *this = jsonValue;
}

GroupCount& GroupCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupKey"))
  {
    m_groupKey = jsonValue.GetString("groupKey");

    m_groupKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupCount::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_groupKeyHasBeenSet)
  {
   payload.WithString("groupKey", m_groupKey);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws

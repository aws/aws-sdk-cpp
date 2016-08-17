/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis/model/HashKeyRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kinesis
{
namespace Model
{

HashKeyRange::HashKeyRange() : 
    m_startingHashKeyHasBeenSet(false),
    m_endingHashKeyHasBeenSet(false)
{
}

HashKeyRange::HashKeyRange(const JsonValue& jsonValue) : 
    m_startingHashKeyHasBeenSet(false),
    m_endingHashKeyHasBeenSet(false)
{
  *this = jsonValue;
}

HashKeyRange& HashKeyRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StartingHashKey"))
  {
    m_startingHashKey = jsonValue.GetString("StartingHashKey");

    m_startingHashKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndingHashKey"))
  {
    m_endingHashKey = jsonValue.GetString("EndingHashKey");

    m_endingHashKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue HashKeyRange::Jsonize() const
{
  JsonValue payload;

  if(m_startingHashKeyHasBeenSet)
  {
   payload.WithString("StartingHashKey", m_startingHashKey);

  }

  if(m_endingHashKeyHasBeenSet)
  {
   payload.WithString("EndingHashKey", m_endingHashKey);

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws
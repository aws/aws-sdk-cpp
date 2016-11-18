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
#include <aws/kinesis/model/SequenceNumberRange.h>
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

SequenceNumberRange::SequenceNumberRange() : 
    m_startingSequenceNumberHasBeenSet(false),
    m_endingSequenceNumberHasBeenSet(false)
{
}

SequenceNumberRange::SequenceNumberRange(const JsonValue& jsonValue) : 
    m_startingSequenceNumberHasBeenSet(false),
    m_endingSequenceNumberHasBeenSet(false)
{
  *this = jsonValue;
}

SequenceNumberRange& SequenceNumberRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StartingSequenceNumber"))
  {
    m_startingSequenceNumber = jsonValue.GetString("StartingSequenceNumber");

    m_startingSequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndingSequenceNumber"))
  {
    m_endingSequenceNumber = jsonValue.GetString("EndingSequenceNumber");

    m_endingSequenceNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SequenceNumberRange::Jsonize() const
{
  JsonValue payload;

  if(m_startingSequenceNumberHasBeenSet)
  {
   payload.WithString("StartingSequenceNumber", m_startingSequenceNumber);

  }

  if(m_endingSequenceNumberHasBeenSet)
  {
   payload.WithString("EndingSequenceNumber", m_endingSequenceNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws
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

#include <aws/mediaconvert/model/QueueTransition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

QueueTransition::QueueTransition() : 
    m_destinationQueueHasBeenSet(false),
    m_sourceQueueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

QueueTransition::QueueTransition(JsonView jsonValue) : 
    m_destinationQueueHasBeenSet(false),
    m_sourceQueueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

QueueTransition& QueueTransition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationQueue"))
  {
    m_destinationQueue = jsonValue.GetString("destinationQueue");

    m_destinationQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceQueue"))
  {
    m_sourceQueue = jsonValue.GetString("sourceQueue");

    m_sourceQueueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueTransition::Jsonize() const
{
  JsonValue payload;

  if(m_destinationQueueHasBeenSet)
  {
   payload.WithString("destinationQueue", m_destinationQueue);

  }

  if(m_sourceQueueHasBeenSet)
  {
   payload.WithString("sourceQueue", m_sourceQueue);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

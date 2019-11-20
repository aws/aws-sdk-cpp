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

#include <aws/quicksight/model/QueueInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

QueueInfo::QueueInfo() : 
    m_waitingOnIngestionHasBeenSet(false),
    m_queuedIngestionHasBeenSet(false)
{
}

QueueInfo::QueueInfo(JsonView jsonValue) : 
    m_waitingOnIngestionHasBeenSet(false),
    m_queuedIngestionHasBeenSet(false)
{
  *this = jsonValue;
}

QueueInfo& QueueInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WaitingOnIngestion"))
  {
    m_waitingOnIngestion = jsonValue.GetString("WaitingOnIngestion");

    m_waitingOnIngestionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueuedIngestion"))
  {
    m_queuedIngestion = jsonValue.GetString("QueuedIngestion");

    m_queuedIngestionHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueInfo::Jsonize() const
{
  JsonValue payload;

  if(m_waitingOnIngestionHasBeenSet)
  {
   payload.WithString("WaitingOnIngestion", m_waitingOnIngestion);

  }

  if(m_queuedIngestionHasBeenSet)
  {
   payload.WithString("QueuedIngestion", m_queuedIngestion);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

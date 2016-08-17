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
#include <aws/ds/model/SnapshotLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

SnapshotLimits::SnapshotLimits() : 
    m_manualSnapshotsLimit(0),
    m_manualSnapshotsLimitHasBeenSet(false),
    m_manualSnapshotsCurrentCount(0),
    m_manualSnapshotsCurrentCountHasBeenSet(false),
    m_manualSnapshotsLimitReached(false),
    m_manualSnapshotsLimitReachedHasBeenSet(false)
{
}

SnapshotLimits::SnapshotLimits(const JsonValue& jsonValue) : 
    m_manualSnapshotsLimit(0),
    m_manualSnapshotsLimitHasBeenSet(false),
    m_manualSnapshotsCurrentCount(0),
    m_manualSnapshotsCurrentCountHasBeenSet(false),
    m_manualSnapshotsLimitReached(false),
    m_manualSnapshotsLimitReachedHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotLimits& SnapshotLimits::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ManualSnapshotsLimit"))
  {
    m_manualSnapshotsLimit = jsonValue.GetInteger("ManualSnapshotsLimit");

    m_manualSnapshotsLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManualSnapshotsCurrentCount"))
  {
    m_manualSnapshotsCurrentCount = jsonValue.GetInteger("ManualSnapshotsCurrentCount");

    m_manualSnapshotsCurrentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManualSnapshotsLimitReached"))
  {
    m_manualSnapshotsLimitReached = jsonValue.GetBool("ManualSnapshotsLimitReached");

    m_manualSnapshotsLimitReachedHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotLimits::Jsonize() const
{
  JsonValue payload;

  if(m_manualSnapshotsLimitHasBeenSet)
  {
   payload.WithInteger("ManualSnapshotsLimit", m_manualSnapshotsLimit);

  }

  if(m_manualSnapshotsCurrentCountHasBeenSet)
  {
   payload.WithInteger("ManualSnapshotsCurrentCount", m_manualSnapshotsCurrentCount);

  }

  if(m_manualSnapshotsLimitReachedHasBeenSet)
  {
   payload.WithBool("ManualSnapshotsLimitReached", m_manualSnapshotsLimitReached);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
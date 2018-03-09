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

#include <aws/medialive/model/ArchiveGroupSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ArchiveGroupSettings::ArchiveGroupSettings() : 
    m_destinationHasBeenSet(false),
    m_rolloverInterval(0),
    m_rolloverIntervalHasBeenSet(false)
{
}

ArchiveGroupSettings::ArchiveGroupSettings(const JsonValue& jsonValue) : 
    m_destinationHasBeenSet(false),
    m_rolloverInterval(0),
    m_rolloverIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveGroupSettings& ArchiveGroupSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rolloverInterval"))
  {
    m_rolloverInterval = jsonValue.GetInteger("rolloverInterval");

    m_rolloverIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_rolloverIntervalHasBeenSet)
  {
   payload.WithInteger("rolloverInterval", m_rolloverInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

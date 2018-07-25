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

#include <aws/kinesis-video-media/model/StartSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoMedia
{
namespace Model
{

StartSelector::StartSelector() : 
    m_startSelectorType(StartSelectorType::NOT_SET),
    m_startSelectorTypeHasBeenSet(false),
    m_afterFragmentNumberHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_continuationTokenHasBeenSet(false)
{
}

StartSelector::StartSelector(JsonView jsonValue) : 
    m_startSelectorType(StartSelectorType::NOT_SET),
    m_startSelectorTypeHasBeenSet(false),
    m_afterFragmentNumberHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_continuationTokenHasBeenSet(false)
{
  *this = jsonValue;
}

StartSelector& StartSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartSelectorType"))
  {
    m_startSelectorType = StartSelectorTypeMapper::GetStartSelectorTypeForName(jsonValue.GetString("StartSelectorType"));

    m_startSelectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AfterFragmentNumber"))
  {
    m_afterFragmentNumber = jsonValue.GetString("AfterFragmentNumber");

    m_afterFragmentNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContinuationToken"))
  {
    m_continuationToken = jsonValue.GetString("ContinuationToken");

    m_continuationTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue StartSelector::Jsonize() const
{
  JsonValue payload;

  if(m_startSelectorTypeHasBeenSet)
  {
   payload.WithString("StartSelectorType", StartSelectorTypeMapper::GetNameForStartSelectorType(m_startSelectorType));
  }

  if(m_afterFragmentNumberHasBeenSet)
  {
   payload.WithString("AfterFragmentNumber", m_afterFragmentNumber);

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_continuationTokenHasBeenSet)
  {
   payload.WithString("ContinuationToken", m_continuationToken);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideoMedia
} // namespace Aws

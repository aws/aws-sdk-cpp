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

#include <aws/mediapackage-vod/model/StreamSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

StreamSelection::StreamSelection() : 
    m_maxVideoBitsPerSecond(0),
    m_maxVideoBitsPerSecondHasBeenSet(false),
    m_minVideoBitsPerSecond(0),
    m_minVideoBitsPerSecondHasBeenSet(false),
    m_streamOrder(StreamOrder::NOT_SET),
    m_streamOrderHasBeenSet(false)
{
}

StreamSelection::StreamSelection(JsonView jsonValue) : 
    m_maxVideoBitsPerSecond(0),
    m_maxVideoBitsPerSecondHasBeenSet(false),
    m_minVideoBitsPerSecond(0),
    m_minVideoBitsPerSecondHasBeenSet(false),
    m_streamOrder(StreamOrder::NOT_SET),
    m_streamOrderHasBeenSet(false)
{
  *this = jsonValue;
}

StreamSelection& StreamSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxVideoBitsPerSecond"))
  {
    m_maxVideoBitsPerSecond = jsonValue.GetInteger("maxVideoBitsPerSecond");

    m_maxVideoBitsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minVideoBitsPerSecond"))
  {
    m_minVideoBitsPerSecond = jsonValue.GetInteger("minVideoBitsPerSecond");

    m_minVideoBitsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamOrder"))
  {
    m_streamOrder = StreamOrderMapper::GetStreamOrderForName(jsonValue.GetString("streamOrder"));

    m_streamOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSelection::Jsonize() const
{
  JsonValue payload;

  if(m_maxVideoBitsPerSecondHasBeenSet)
  {
   payload.WithInteger("maxVideoBitsPerSecond", m_maxVideoBitsPerSecond);

  }

  if(m_minVideoBitsPerSecondHasBeenSet)
  {
   payload.WithInteger("minVideoBitsPerSecond", m_minVideoBitsPerSecond);

  }

  if(m_streamOrderHasBeenSet)
  {
   payload.WithString("streamOrder", StreamOrderMapper::GetNameForStreamOrder(m_streamOrder));
  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws

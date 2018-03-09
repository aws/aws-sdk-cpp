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

#include <aws/mediaconvert/model/OutputDetail.h>
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

OutputDetail::OutputDetail() : 
    m_durationInMs(0),
    m_durationInMsHasBeenSet(false),
    m_videoDetailsHasBeenSet(false)
{
}

OutputDetail::OutputDetail(const JsonValue& jsonValue) : 
    m_durationInMs(0),
    m_durationInMsHasBeenSet(false),
    m_videoDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDetail& OutputDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("durationInMs"))
  {
    m_durationInMs = jsonValue.GetInteger("durationInMs");

    m_durationInMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoDetails"))
  {
    m_videoDetails = jsonValue.GetObject("videoDetails");

    m_videoDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputDetail::Jsonize() const
{
  JsonValue payload;

  if(m_durationInMsHasBeenSet)
  {
   payload.WithInteger("durationInMs", m_durationInMs);

  }

  if(m_videoDetailsHasBeenSet)
  {
   payload.WithObject("videoDetails", m_videoDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

OutputDetail::OutputDetail(JsonView jsonValue) : 
    m_durationInMs(0),
    m_durationInMsHasBeenSet(false),
    m_videoDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDetail& OutputDetail::operator =(JsonView jsonValue)
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

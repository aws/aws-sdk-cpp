/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/Timing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Timing::Timing() : 
    m_submitTimeMillis(0),
    m_submitTimeMillisHasBeenSet(false),
    m_startTimeMillis(0),
    m_startTimeMillisHasBeenSet(false),
    m_finishTimeMillis(0),
    m_finishTimeMillisHasBeenSet(false)
{
}

Timing::Timing(JsonView jsonValue) : 
    m_submitTimeMillis(0),
    m_submitTimeMillisHasBeenSet(false),
    m_startTimeMillis(0),
    m_startTimeMillisHasBeenSet(false),
    m_finishTimeMillis(0),
    m_finishTimeMillisHasBeenSet(false)
{
  *this = jsonValue;
}

Timing& Timing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubmitTimeMillis"))
  {
    m_submitTimeMillis = jsonValue.GetInt64("SubmitTimeMillis");

    m_submitTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimeMillis"))
  {
    m_startTimeMillis = jsonValue.GetInt64("StartTimeMillis");

    m_startTimeMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinishTimeMillis"))
  {
    m_finishTimeMillis = jsonValue.GetInt64("FinishTimeMillis");

    m_finishTimeMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue Timing::Jsonize() const
{
  JsonValue payload;

  if(m_submitTimeMillisHasBeenSet)
  {
   payload.WithInt64("SubmitTimeMillis", m_submitTimeMillis);

  }

  if(m_startTimeMillisHasBeenSet)
  {
   payload.WithInt64("StartTimeMillis", m_startTimeMillis);

  }

  if(m_finishTimeMillisHasBeenSet)
  {
   payload.WithInt64("FinishTimeMillis", m_finishTimeMillis);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

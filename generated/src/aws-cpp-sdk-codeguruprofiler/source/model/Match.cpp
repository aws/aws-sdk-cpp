/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/Match.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

Match::Match() : 
    m_frameAddressHasBeenSet(false),
    m_targetFramesIndex(0),
    m_targetFramesIndexHasBeenSet(false),
    m_thresholdBreachValue(0.0),
    m_thresholdBreachValueHasBeenSet(false)
{
}

Match::Match(JsonView jsonValue) : 
    m_frameAddressHasBeenSet(false),
    m_targetFramesIndex(0),
    m_targetFramesIndexHasBeenSet(false),
    m_thresholdBreachValue(0.0),
    m_thresholdBreachValueHasBeenSet(false)
{
  *this = jsonValue;
}

Match& Match::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frameAddress"))
  {
    m_frameAddress = jsonValue.GetString("frameAddress");

    m_frameAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetFramesIndex"))
  {
    m_targetFramesIndex = jsonValue.GetInteger("targetFramesIndex");

    m_targetFramesIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thresholdBreachValue"))
  {
    m_thresholdBreachValue = jsonValue.GetDouble("thresholdBreachValue");

    m_thresholdBreachValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Match::Jsonize() const
{
  JsonValue payload;

  if(m_frameAddressHasBeenSet)
  {
   payload.WithString("frameAddress", m_frameAddress);

  }

  if(m_targetFramesIndexHasBeenSet)
  {
   payload.WithInteger("targetFramesIndex", m_targetFramesIndex);

  }

  if(m_thresholdBreachValueHasBeenSet)
  {
   payload.WithDouble("thresholdBreachValue", m_thresholdBreachValue);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

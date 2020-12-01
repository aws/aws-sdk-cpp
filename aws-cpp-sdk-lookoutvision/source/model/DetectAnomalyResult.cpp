/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DetectAnomalyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

DetectAnomalyResult::DetectAnomalyResult() : 
    m_sourceHasBeenSet(false),
    m_isAnomalous(false),
    m_isAnomalousHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

DetectAnomalyResult::DetectAnomalyResult(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_isAnomalous(false),
    m_isAnomalousHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

DetectAnomalyResult& DetectAnomalyResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsAnomalous"))
  {
    m_isAnomalous = jsonValue.GetBool("IsAnomalous");

    m_isAnomalousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectAnomalyResult::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_isAnomalousHasBeenSet)
  {
   payload.WithBool("IsAnomalous", m_isAnomalous);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

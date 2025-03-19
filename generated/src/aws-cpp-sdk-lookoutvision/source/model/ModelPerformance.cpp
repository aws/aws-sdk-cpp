/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelPerformance.h>
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

ModelPerformance::ModelPerformance(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelPerformance& ModelPerformance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("F1Score"))
  {
    m_f1Score = jsonValue.GetDouble("F1Score");
    m_f1ScoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Recall"))
  {
    m_recall = jsonValue.GetDouble("Recall");
    m_recallHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Precision"))
  {
    m_precision = jsonValue.GetDouble("Precision");
    m_precisionHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelPerformance::Jsonize() const
{
  JsonValue payload;

  if(m_f1ScoreHasBeenSet)
  {
   payload.WithDouble("F1Score", m_f1Score);

  }

  if(m_recallHasBeenSet)
  {
   payload.WithDouble("Recall", m_recall);

  }

  if(m_precisionHasBeenSet)
  {
   payload.WithDouble("Precision", m_precision);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

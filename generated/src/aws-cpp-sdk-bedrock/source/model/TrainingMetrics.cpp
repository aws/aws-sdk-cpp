/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrainingMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

TrainingMetrics::TrainingMetrics() : 
    m_trainingLoss(0.0),
    m_trainingLossHasBeenSet(false)
{
}

TrainingMetrics::TrainingMetrics(JsonView jsonValue) : 
    m_trainingLoss(0.0),
    m_trainingLossHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingMetrics& TrainingMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trainingLoss"))
  {
    m_trainingLoss = jsonValue.GetDouble("trainingLoss");

    m_trainingLossHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_trainingLossHasBeenSet)
  {
   payload.WithDouble("trainingLoss", m_trainingLoss);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws

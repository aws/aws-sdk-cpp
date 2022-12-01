/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeSourceKinesisStreamParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeSourceKinesisStreamParameters::PipeSourceKinesisStreamParameters() : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_onPartialBatchItemFailure(OnPartialBatchItemFailureStreams::NOT_SET),
    m_onPartialBatchItemFailureHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_startingPosition(KinesisStreamStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_startingPositionTimestampHasBeenSet(false)
{
}

PipeSourceKinesisStreamParameters::PipeSourceKinesisStreamParameters(JsonView jsonValue) : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_onPartialBatchItemFailure(OnPartialBatchItemFailureStreams::NOT_SET),
    m_onPartialBatchItemFailureHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_startingPosition(KinesisStreamStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_startingPositionTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PipeSourceKinesisStreamParameters& PipeSourceKinesisStreamParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

    m_deadLetterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");

    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRecordAgeInSeconds"))
  {
    m_maximumRecordAgeInSeconds = jsonValue.GetInteger("MaximumRecordAgeInSeconds");

    m_maximumRecordAgeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRetryAttempts"))
  {
    m_maximumRetryAttempts = jsonValue.GetInteger("MaximumRetryAttempts");

    m_maximumRetryAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnPartialBatchItemFailure"))
  {
    m_onPartialBatchItemFailure = OnPartialBatchItemFailureStreamsMapper::GetOnPartialBatchItemFailureStreamsForName(jsonValue.GetString("OnPartialBatchItemFailure"));

    m_onPartialBatchItemFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelizationFactor"))
  {
    m_parallelizationFactor = jsonValue.GetInteger("ParallelizationFactor");

    m_parallelizationFactorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = KinesisStreamStartPositionMapper::GetKinesisStreamStartPositionForName(jsonValue.GetString("StartingPosition"));

    m_startingPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPositionTimestamp"))
  {
    m_startingPositionTimestamp = jsonValue.GetDouble("StartingPositionTimestamp");

    m_startingPositionTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeSourceKinesisStreamParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_maximumRecordAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumRecordAgeInSeconds", m_maximumRecordAgeInSeconds);

  }

  if(m_maximumRetryAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumRetryAttempts", m_maximumRetryAttempts);

  }

  if(m_onPartialBatchItemFailureHasBeenSet)
  {
   payload.WithString("OnPartialBatchItemFailure", OnPartialBatchItemFailureStreamsMapper::GetNameForOnPartialBatchItemFailureStreams(m_onPartialBatchItemFailure));
  }

  if(m_parallelizationFactorHasBeenSet)
  {
   payload.WithInteger("ParallelizationFactor", m_parallelizationFactor);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", KinesisStreamStartPositionMapper::GetNameForKinesisStreamStartPosition(m_startingPosition));
  }

  if(m_startingPositionTimestampHasBeenSet)
  {
   payload.WithDouble("StartingPositionTimestamp", m_startingPositionTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DQResultsPublishingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DQResultsPublishingOptions::DQResultsPublishingOptions() : 
    m_evaluationContextHasBeenSet(false),
    m_resultsS3PrefixHasBeenSet(false),
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_resultsPublishingEnabled(false),
    m_resultsPublishingEnabledHasBeenSet(false)
{
}

DQResultsPublishingOptions::DQResultsPublishingOptions(JsonView jsonValue) : 
    m_evaluationContextHasBeenSet(false),
    m_resultsS3PrefixHasBeenSet(false),
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_resultsPublishingEnabled(false),
    m_resultsPublishingEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

DQResultsPublishingOptions& DQResultsPublishingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");

    m_evaluationContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultsS3Prefix"))
  {
    m_resultsS3Prefix = jsonValue.GetString("ResultsS3Prefix");

    m_resultsS3PrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchMetricsEnabled"))
  {
    m_cloudWatchMetricsEnabled = jsonValue.GetBool("CloudWatchMetricsEnabled");

    m_cloudWatchMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultsPublishingEnabled"))
  {
    m_resultsPublishingEnabled = jsonValue.GetBool("ResultsPublishingEnabled");

    m_resultsPublishingEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue DQResultsPublishingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithString("EvaluationContext", m_evaluationContext);

  }

  if(m_resultsS3PrefixHasBeenSet)
  {
   payload.WithString("ResultsS3Prefix", m_resultsS3Prefix);

  }

  if(m_cloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchMetricsEnabled", m_cloudWatchMetricsEnabled);

  }

  if(m_resultsPublishingEnabledHasBeenSet)
  {
   payload.WithBool("ResultsPublishingEnabled", m_resultsPublishingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

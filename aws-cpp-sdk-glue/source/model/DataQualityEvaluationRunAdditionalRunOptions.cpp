/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityEvaluationRunAdditionalRunOptions.h>
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

DataQualityEvaluationRunAdditionalRunOptions::DataQualityEvaluationRunAdditionalRunOptions() : 
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_resultsS3PrefixHasBeenSet(false)
{
}

DataQualityEvaluationRunAdditionalRunOptions::DataQualityEvaluationRunAdditionalRunOptions(JsonView jsonValue) : 
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_resultsS3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityEvaluationRunAdditionalRunOptions& DataQualityEvaluationRunAdditionalRunOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchMetricsEnabled"))
  {
    m_cloudWatchMetricsEnabled = jsonValue.GetBool("CloudWatchMetricsEnabled");

    m_cloudWatchMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultsS3Prefix"))
  {
    m_resultsS3Prefix = jsonValue.GetString("ResultsS3Prefix");

    m_resultsS3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityEvaluationRunAdditionalRunOptions::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchMetricsEnabled", m_cloudWatchMetricsEnabled);

  }

  if(m_resultsS3PrefixHasBeenSet)
  {
   payload.WithString("ResultsS3Prefix", m_resultsS3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

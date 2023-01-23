/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/MetricSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

MetricSource::MetricSource() : 
    m_s3SourceConfigHasBeenSet(false),
    m_appFlowConfigHasBeenSet(false),
    m_cloudWatchConfigHasBeenSet(false),
    m_rDSSourceConfigHasBeenSet(false),
    m_redshiftSourceConfigHasBeenSet(false),
    m_athenaSourceConfigHasBeenSet(false)
{
}

MetricSource::MetricSource(JsonView jsonValue) : 
    m_s3SourceConfigHasBeenSet(false),
    m_appFlowConfigHasBeenSet(false),
    m_cloudWatchConfigHasBeenSet(false),
    m_rDSSourceConfigHasBeenSet(false),
    m_redshiftSourceConfigHasBeenSet(false),
    m_athenaSourceConfigHasBeenSet(false)
{
  *this = jsonValue;
}

MetricSource& MetricSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3SourceConfig"))
  {
    m_s3SourceConfig = jsonValue.GetObject("S3SourceConfig");

    m_s3SourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppFlowConfig"))
  {
    m_appFlowConfig = jsonValue.GetObject("AppFlowConfig");

    m_appFlowConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchConfig"))
  {
    m_cloudWatchConfig = jsonValue.GetObject("CloudWatchConfig");

    m_cloudWatchConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RDSSourceConfig"))
  {
    m_rDSSourceConfig = jsonValue.GetObject("RDSSourceConfig");

    m_rDSSourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftSourceConfig"))
  {
    m_redshiftSourceConfig = jsonValue.GetObject("RedshiftSourceConfig");

    m_redshiftSourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AthenaSourceConfig"))
  {
    m_athenaSourceConfig = jsonValue.GetObject("AthenaSourceConfig");

    m_athenaSourceConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3SourceConfigHasBeenSet)
  {
   payload.WithObject("S3SourceConfig", m_s3SourceConfig.Jsonize());

  }

  if(m_appFlowConfigHasBeenSet)
  {
   payload.WithObject("AppFlowConfig", m_appFlowConfig.Jsonize());

  }

  if(m_cloudWatchConfigHasBeenSet)
  {
   payload.WithObject("CloudWatchConfig", m_cloudWatchConfig.Jsonize());

  }

  if(m_rDSSourceConfigHasBeenSet)
  {
   payload.WithObject("RDSSourceConfig", m_rDSSourceConfig.Jsonize());

  }

  if(m_redshiftSourceConfigHasBeenSet)
  {
   payload.WithObject("RedshiftSourceConfig", m_redshiftSourceConfig.Jsonize());

  }

  if(m_athenaSourceConfigHasBeenSet)
  {
   payload.WithObject("AthenaSourceConfig", m_athenaSourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/MonitorDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

MonitorDataSource::MonitorDataSource() : 
    m_datasetImportJobArnHasBeenSet(false),
    m_forecastArnHasBeenSet(false),
    m_predictorArnHasBeenSet(false)
{
}

MonitorDataSource::MonitorDataSource(JsonView jsonValue) : 
    m_datasetImportJobArnHasBeenSet(false),
    m_forecastArnHasBeenSet(false),
    m_predictorArnHasBeenSet(false)
{
  *this = jsonValue;
}

MonitorDataSource& MonitorDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetImportJobArn"))
  {
    m_datasetImportJobArn = jsonValue.GetString("DatasetImportJobArn");

    m_datasetImportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastArn"))
  {
    m_forecastArn = jsonValue.GetString("ForecastArn");

    m_forecastArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");

    m_predictorArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitorDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_datasetImportJobArnHasBeenSet)
  {
   payload.WithString("DatasetImportJobArn", m_datasetImportJobArn);

  }

  if(m_forecastArnHasBeenSet)
  {
   payload.WithString("ForecastArn", m_forecastArn);

  }

  if(m_predictorArnHasBeenSet)
  {
   payload.WithString("PredictorArn", m_predictorArn);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws

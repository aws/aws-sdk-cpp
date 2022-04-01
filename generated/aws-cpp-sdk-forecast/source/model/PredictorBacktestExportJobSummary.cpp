/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/PredictorBacktestExportJobSummary.h>
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

PredictorBacktestExportJobSummary::PredictorBacktestExportJobSummary() : 
    m_predictorBacktestExportJobArnHasBeenSet(false),
    m_predictorBacktestExportJobNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

PredictorBacktestExportJobSummary::PredictorBacktestExportJobSummary(JsonView jsonValue) : 
    m_predictorBacktestExportJobArnHasBeenSet(false),
    m_predictorBacktestExportJobNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PredictorBacktestExportJobSummary& PredictorBacktestExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredictorBacktestExportJobArn"))
  {
    m_predictorBacktestExportJobArn = jsonValue.GetString("PredictorBacktestExportJobArn");

    m_predictorBacktestExportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictorBacktestExportJobName"))
  {
    m_predictorBacktestExportJobName = jsonValue.GetString("PredictorBacktestExportJobName");

    m_predictorBacktestExportJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictorBacktestExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_predictorBacktestExportJobArnHasBeenSet)
  {
   payload.WithString("PredictorBacktestExportJobArn", m_predictorBacktestExportJobArn);

  }

  if(m_predictorBacktestExportJobNameHasBeenSet)
  {
   payload.WithString("PredictorBacktestExportJobName", m_predictorBacktestExportJobName);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws

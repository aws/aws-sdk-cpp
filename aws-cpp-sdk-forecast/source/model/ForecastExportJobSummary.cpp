/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/forecast/model/ForecastExportJobSummary.h>
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

ForecastExportJobSummary::ForecastExportJobSummary() : 
    m_forecastExportJobArnHasBeenSet(false),
    m_forecastExportJobNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

ForecastExportJobSummary::ForecastExportJobSummary(JsonView jsonValue) : 
    m_forecastExportJobArnHasBeenSet(false),
    m_forecastExportJobNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ForecastExportJobSummary& ForecastExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ForecastExportJobArn"))
  {
    m_forecastExportJobArn = jsonValue.GetString("ForecastExportJobArn");

    m_forecastExportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastExportJobName"))
  {
    m_forecastExportJobName = jsonValue.GetString("ForecastExportJobName");

    m_forecastExportJobNameHasBeenSet = true;
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

JsonValue ForecastExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_forecastExportJobArnHasBeenSet)
  {
   payload.WithString("ForecastExportJobArn", m_forecastExportJobArn);

  }

  if(m_forecastExportJobNameHasBeenSet)
  {
   payload.WithString("ForecastExportJobName", m_forecastExportJobName);

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

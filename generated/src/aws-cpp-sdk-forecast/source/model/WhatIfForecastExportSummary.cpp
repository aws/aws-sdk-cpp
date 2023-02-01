/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/WhatIfForecastExportSummary.h>
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

WhatIfForecastExportSummary::WhatIfForecastExportSummary() : 
    m_whatIfForecastExportArnHasBeenSet(false),
    m_whatIfForecastArnsHasBeenSet(false),
    m_whatIfForecastExportNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

WhatIfForecastExportSummary::WhatIfForecastExportSummary(JsonView jsonValue) : 
    m_whatIfForecastExportArnHasBeenSet(false),
    m_whatIfForecastArnsHasBeenSet(false),
    m_whatIfForecastExportNameHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WhatIfForecastExportSummary& WhatIfForecastExportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WhatIfForecastExportArn"))
  {
    m_whatIfForecastExportArn = jsonValue.GetString("WhatIfForecastExportArn");

    m_whatIfForecastExportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WhatIfForecastArns"))
  {
    Aws::Utils::Array<JsonView> whatIfForecastArnsJsonList = jsonValue.GetArray("WhatIfForecastArns");
    for(unsigned whatIfForecastArnsIndex = 0; whatIfForecastArnsIndex < whatIfForecastArnsJsonList.GetLength(); ++whatIfForecastArnsIndex)
    {
      m_whatIfForecastArns.push_back(whatIfForecastArnsJsonList[whatIfForecastArnsIndex].AsString());
    }
    m_whatIfForecastArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WhatIfForecastExportName"))
  {
    m_whatIfForecastExportName = jsonValue.GetString("WhatIfForecastExportName");

    m_whatIfForecastExportNameHasBeenSet = true;
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

JsonValue WhatIfForecastExportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_whatIfForecastExportArnHasBeenSet)
  {
   payload.WithString("WhatIfForecastExportArn", m_whatIfForecastExportArn);

  }

  if(m_whatIfForecastArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> whatIfForecastArnsJsonList(m_whatIfForecastArns.size());
   for(unsigned whatIfForecastArnsIndex = 0; whatIfForecastArnsIndex < whatIfForecastArnsJsonList.GetLength(); ++whatIfForecastArnsIndex)
   {
     whatIfForecastArnsJsonList[whatIfForecastArnsIndex].AsString(m_whatIfForecastArns[whatIfForecastArnsIndex]);
   }
   payload.WithArray("WhatIfForecastArns", std::move(whatIfForecastArnsJsonList));

  }

  if(m_whatIfForecastExportNameHasBeenSet)
  {
   payload.WithString("WhatIfForecastExportName", m_whatIfForecastExportName);

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

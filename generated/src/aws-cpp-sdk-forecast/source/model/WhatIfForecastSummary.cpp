/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/WhatIfForecastSummary.h>
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

WhatIfForecastSummary::WhatIfForecastSummary() : 
    m_whatIfForecastArnHasBeenSet(false),
    m_whatIfForecastNameHasBeenSet(false),
    m_whatIfAnalysisArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

WhatIfForecastSummary::WhatIfForecastSummary(JsonView jsonValue) : 
    m_whatIfForecastArnHasBeenSet(false),
    m_whatIfForecastNameHasBeenSet(false),
    m_whatIfAnalysisArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WhatIfForecastSummary& WhatIfForecastSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WhatIfForecastArn"))
  {
    m_whatIfForecastArn = jsonValue.GetString("WhatIfForecastArn");

    m_whatIfForecastArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WhatIfForecastName"))
  {
    m_whatIfForecastName = jsonValue.GetString("WhatIfForecastName");

    m_whatIfForecastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WhatIfAnalysisArn"))
  {
    m_whatIfAnalysisArn = jsonValue.GetString("WhatIfAnalysisArn");

    m_whatIfAnalysisArnHasBeenSet = true;
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

JsonValue WhatIfForecastSummary::Jsonize() const
{
  JsonValue payload;

  if(m_whatIfForecastArnHasBeenSet)
  {
   payload.WithString("WhatIfForecastArn", m_whatIfForecastArn);

  }

  if(m_whatIfForecastNameHasBeenSet)
  {
   payload.WithString("WhatIfForecastName", m_whatIfForecastName);

  }

  if(m_whatIfAnalysisArnHasBeenSet)
  {
   payload.WithString("WhatIfAnalysisArn", m_whatIfAnalysisArn);

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

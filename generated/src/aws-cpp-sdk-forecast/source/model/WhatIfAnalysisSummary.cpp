/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/WhatIfAnalysisSummary.h>
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

WhatIfAnalysisSummary::WhatIfAnalysisSummary() : 
    m_whatIfAnalysisArnHasBeenSet(false),
    m_whatIfAnalysisNameHasBeenSet(false),
    m_forecastArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

WhatIfAnalysisSummary::WhatIfAnalysisSummary(JsonView jsonValue) : 
    m_whatIfAnalysisArnHasBeenSet(false),
    m_whatIfAnalysisNameHasBeenSet(false),
    m_forecastArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WhatIfAnalysisSummary& WhatIfAnalysisSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WhatIfAnalysisArn"))
  {
    m_whatIfAnalysisArn = jsonValue.GetString("WhatIfAnalysisArn");

    m_whatIfAnalysisArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WhatIfAnalysisName"))
  {
    m_whatIfAnalysisName = jsonValue.GetString("WhatIfAnalysisName");

    m_whatIfAnalysisNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastArn"))
  {
    m_forecastArn = jsonValue.GetString("ForecastArn");

    m_forecastArnHasBeenSet = true;
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

JsonValue WhatIfAnalysisSummary::Jsonize() const
{
  JsonValue payload;

  if(m_whatIfAnalysisArnHasBeenSet)
  {
   payload.WithString("WhatIfAnalysisArn", m_whatIfAnalysisArn);

  }

  if(m_whatIfAnalysisNameHasBeenSet)
  {
   payload.WithString("WhatIfAnalysisName", m_whatIfAnalysisName);

  }

  if(m_forecastArnHasBeenSet)
  {
   payload.WithString("ForecastArn", m_forecastArn);

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

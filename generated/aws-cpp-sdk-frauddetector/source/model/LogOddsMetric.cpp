/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/LogOddsMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

LogOddsMetric::LogOddsMetric() : 
    m_variableNameHasBeenSet(false),
    m_variableTypeHasBeenSet(false),
    m_variableImportance(0.0),
    m_variableImportanceHasBeenSet(false)
{
}

LogOddsMetric::LogOddsMetric(JsonView jsonValue) : 
    m_variableNameHasBeenSet(false),
    m_variableTypeHasBeenSet(false),
    m_variableImportance(0.0),
    m_variableImportanceHasBeenSet(false)
{
  *this = jsonValue;
}

LogOddsMetric& LogOddsMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("variableName"))
  {
    m_variableName = jsonValue.GetString("variableName");

    m_variableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variableType"))
  {
    m_variableType = jsonValue.GetString("variableType");

    m_variableTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variableImportance"))
  {
    m_variableImportance = jsonValue.GetDouble("variableImportance");

    m_variableImportanceHasBeenSet = true;
  }

  return *this;
}

JsonValue LogOddsMetric::Jsonize() const
{
  JsonValue payload;

  if(m_variableNameHasBeenSet)
  {
   payload.WithString("variableName", m_variableName);

  }

  if(m_variableTypeHasBeenSet)
  {
   payload.WithString("variableType", m_variableType);

  }

  if(m_variableImportanceHasBeenSet)
  {
   payload.WithDouble("variableImportance", m_variableImportance);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws

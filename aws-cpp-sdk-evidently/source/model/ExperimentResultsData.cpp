/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentResultsData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ExperimentResultsData::ExperimentResultsData() : 
    m_metricNameHasBeenSet(false),
    m_resultStat(ExperimentResultResponseType::NOT_SET),
    m_resultStatHasBeenSet(false),
    m_treatmentNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

ExperimentResultsData::ExperimentResultsData(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_resultStat(ExperimentResultResponseType::NOT_SET),
    m_resultStatHasBeenSet(false),
    m_treatmentNameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentResultsData& ExperimentResultsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultStat"))
  {
    m_resultStat = ExperimentResultResponseTypeMapper::GetExperimentResultResponseTypeForName(jsonValue.GetString("resultStat"));

    m_resultStatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treatmentName"))
  {
    m_treatmentName = jsonValue.GetString("treatmentName");

    m_treatmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsDouble());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentResultsData::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_resultStatHasBeenSet)
  {
   payload.WithString("resultStat", ExperimentResultResponseTypeMapper::GetNameForExperimentResultResponseType(m_resultStat));
  }

  if(m_treatmentNameHasBeenSet)
  {
   payload.WithString("treatmentName", m_treatmentName);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsDouble(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

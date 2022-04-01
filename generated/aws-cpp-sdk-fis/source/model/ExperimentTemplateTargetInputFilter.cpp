/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplateTargetInputFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentTemplateTargetInputFilter::ExperimentTemplateTargetInputFilter() : 
    m_pathHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

ExperimentTemplateTargetInputFilter::ExperimentTemplateTargetInputFilter(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentTemplateTargetInputFilter& ExperimentTemplateTargetInputFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentTemplateTargetInputFilter::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisSourceTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AnalysisSourceTemplate::AnalysisSourceTemplate() : 
    m_dataSetReferencesHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

AnalysisSourceTemplate::AnalysisSourceTemplate(JsonView jsonValue) : 
    m_dataSetReferencesHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisSourceTemplate& AnalysisSourceTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetReferences"))
  {
    Array<JsonView> dataSetReferencesJsonList = jsonValue.GetArray("DataSetReferences");
    for(unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex)
    {
      m_dataSetReferences.push_back(dataSetReferencesJsonList[dataSetReferencesIndex].AsObject());
    }
    m_dataSetReferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisSourceTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetReferencesHasBeenSet)
  {
   Array<JsonValue> dataSetReferencesJsonList(m_dataSetReferences.size());
   for(unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex)
   {
     dataSetReferencesJsonList[dataSetReferencesIndex].AsObject(m_dataSetReferences[dataSetReferencesIndex].Jsonize());
   }
   payload.WithArray("DataSetReferences", std::move(dataSetReferencesJsonList));

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

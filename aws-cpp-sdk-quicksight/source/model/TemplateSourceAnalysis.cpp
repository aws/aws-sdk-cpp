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

#include <aws/quicksight/model/TemplateSourceAnalysis.h>
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

TemplateSourceAnalysis::TemplateSourceAnalysis() : 
    m_arnHasBeenSet(false),
    m_dataSetReferencesHasBeenSet(false)
{
}

TemplateSourceAnalysis::TemplateSourceAnalysis(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_dataSetReferencesHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSourceAnalysis& TemplateSourceAnalysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetReferences"))
  {
    Array<JsonView> dataSetReferencesJsonList = jsonValue.GetArray("DataSetReferences");
    for(unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex)
    {
      m_dataSetReferences.push_back(dataSetReferencesJsonList[dataSetReferencesIndex].AsObject());
    }
    m_dataSetReferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSourceAnalysis::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_dataSetReferencesHasBeenSet)
  {
   Array<JsonValue> dataSetReferencesJsonList(m_dataSetReferences.size());
   for(unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex)
   {
     dataSetReferencesJsonList[dataSetReferencesIndex].AsObject(m_dataSetReferences[dataSetReferencesIndex].Jsonize());
   }
   payload.WithArray("DataSetReferences", std::move(dataSetReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

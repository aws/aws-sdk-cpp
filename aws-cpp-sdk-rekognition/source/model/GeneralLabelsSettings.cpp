/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GeneralLabelsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

GeneralLabelsSettings::GeneralLabelsSettings() : 
    m_labelInclusionFiltersHasBeenSet(false),
    m_labelExclusionFiltersHasBeenSet(false),
    m_labelCategoryInclusionFiltersHasBeenSet(false),
    m_labelCategoryExclusionFiltersHasBeenSet(false)
{
}

GeneralLabelsSettings::GeneralLabelsSettings(JsonView jsonValue) : 
    m_labelInclusionFiltersHasBeenSet(false),
    m_labelExclusionFiltersHasBeenSet(false),
    m_labelCategoryInclusionFiltersHasBeenSet(false),
    m_labelCategoryExclusionFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

GeneralLabelsSettings& GeneralLabelsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelInclusionFilters"))
  {
    Aws::Utils::Array<JsonView> labelInclusionFiltersJsonList = jsonValue.GetArray("LabelInclusionFilters");
    for(unsigned labelInclusionFiltersIndex = 0; labelInclusionFiltersIndex < labelInclusionFiltersJsonList.GetLength(); ++labelInclusionFiltersIndex)
    {
      m_labelInclusionFilters.push_back(labelInclusionFiltersJsonList[labelInclusionFiltersIndex].AsString());
    }
    m_labelInclusionFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelExclusionFilters"))
  {
    Aws::Utils::Array<JsonView> labelExclusionFiltersJsonList = jsonValue.GetArray("LabelExclusionFilters");
    for(unsigned labelExclusionFiltersIndex = 0; labelExclusionFiltersIndex < labelExclusionFiltersJsonList.GetLength(); ++labelExclusionFiltersIndex)
    {
      m_labelExclusionFilters.push_back(labelExclusionFiltersJsonList[labelExclusionFiltersIndex].AsString());
    }
    m_labelExclusionFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelCategoryInclusionFilters"))
  {
    Aws::Utils::Array<JsonView> labelCategoryInclusionFiltersJsonList = jsonValue.GetArray("LabelCategoryInclusionFilters");
    for(unsigned labelCategoryInclusionFiltersIndex = 0; labelCategoryInclusionFiltersIndex < labelCategoryInclusionFiltersJsonList.GetLength(); ++labelCategoryInclusionFiltersIndex)
    {
      m_labelCategoryInclusionFilters.push_back(labelCategoryInclusionFiltersJsonList[labelCategoryInclusionFiltersIndex].AsString());
    }
    m_labelCategoryInclusionFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelCategoryExclusionFilters"))
  {
    Aws::Utils::Array<JsonView> labelCategoryExclusionFiltersJsonList = jsonValue.GetArray("LabelCategoryExclusionFilters");
    for(unsigned labelCategoryExclusionFiltersIndex = 0; labelCategoryExclusionFiltersIndex < labelCategoryExclusionFiltersJsonList.GetLength(); ++labelCategoryExclusionFiltersIndex)
    {
      m_labelCategoryExclusionFilters.push_back(labelCategoryExclusionFiltersJsonList[labelCategoryExclusionFiltersIndex].AsString());
    }
    m_labelCategoryExclusionFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneralLabelsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_labelInclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelInclusionFiltersJsonList(m_labelInclusionFilters.size());
   for(unsigned labelInclusionFiltersIndex = 0; labelInclusionFiltersIndex < labelInclusionFiltersJsonList.GetLength(); ++labelInclusionFiltersIndex)
   {
     labelInclusionFiltersJsonList[labelInclusionFiltersIndex].AsString(m_labelInclusionFilters[labelInclusionFiltersIndex]);
   }
   payload.WithArray("LabelInclusionFilters", std::move(labelInclusionFiltersJsonList));

  }

  if(m_labelExclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelExclusionFiltersJsonList(m_labelExclusionFilters.size());
   for(unsigned labelExclusionFiltersIndex = 0; labelExclusionFiltersIndex < labelExclusionFiltersJsonList.GetLength(); ++labelExclusionFiltersIndex)
   {
     labelExclusionFiltersJsonList[labelExclusionFiltersIndex].AsString(m_labelExclusionFilters[labelExclusionFiltersIndex]);
   }
   payload.WithArray("LabelExclusionFilters", std::move(labelExclusionFiltersJsonList));

  }

  if(m_labelCategoryInclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelCategoryInclusionFiltersJsonList(m_labelCategoryInclusionFilters.size());
   for(unsigned labelCategoryInclusionFiltersIndex = 0; labelCategoryInclusionFiltersIndex < labelCategoryInclusionFiltersJsonList.GetLength(); ++labelCategoryInclusionFiltersIndex)
   {
     labelCategoryInclusionFiltersJsonList[labelCategoryInclusionFiltersIndex].AsString(m_labelCategoryInclusionFilters[labelCategoryInclusionFiltersIndex]);
   }
   payload.WithArray("LabelCategoryInclusionFilters", std::move(labelCategoryInclusionFiltersJsonList));

  }

  if(m_labelCategoryExclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelCategoryExclusionFiltersJsonList(m_labelCategoryExclusionFilters.size());
   for(unsigned labelCategoryExclusionFiltersIndex = 0; labelCategoryExclusionFiltersIndex < labelCategoryExclusionFiltersJsonList.GetLength(); ++labelCategoryExclusionFiltersIndex)
   {
     labelCategoryExclusionFiltersJsonList[labelCategoryExclusionFiltersIndex].AsString(m_labelCategoryExclusionFilters[labelCategoryExclusionFiltersIndex]);
   }
   payload.WithArray("LabelCategoryExclusionFilters", std::move(labelCategoryExclusionFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws

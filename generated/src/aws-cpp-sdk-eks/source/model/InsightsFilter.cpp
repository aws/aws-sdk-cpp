/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/InsightsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

InsightsFilter::InsightsFilter() : 
    m_categoriesHasBeenSet(false),
    m_kubernetesVersionsHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
}

InsightsFilter::InsightsFilter(JsonView jsonValue) : 
    m_categoriesHasBeenSet(false),
    m_kubernetesVersionsHasBeenSet(false),
    m_statusesHasBeenSet(false)
{
  *this = jsonValue;
}

InsightsFilter& InsightsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(CategoryMapper::GetCategoryForName(categoriesJsonList[categoriesIndex].AsString()));
    }
    m_categoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesVersions"))
  {
    Aws::Utils::Array<JsonView> kubernetesVersionsJsonList = jsonValue.GetArray("kubernetesVersions");
    for(unsigned kubernetesVersionsIndex = 0; kubernetesVersionsIndex < kubernetesVersionsJsonList.GetLength(); ++kubernetesVersionsIndex)
    {
      m_kubernetesVersions.push_back(kubernetesVersionsJsonList[kubernetesVersionsIndex].AsString());
    }
    m_kubernetesVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statuses"))
  {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
    {
      m_statuses.push_back(InsightStatusValueMapper::GetInsightStatusValueForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsString(CategoryMapper::GetNameForCategory(m_categories[categoriesIndex]));
   }
   payload.WithArray("categories", std::move(categoriesJsonList));

  }

  if(m_kubernetesVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kubernetesVersionsJsonList(m_kubernetesVersions.size());
   for(unsigned kubernetesVersionsIndex = 0; kubernetesVersionsIndex < kubernetesVersionsJsonList.GetLength(); ++kubernetesVersionsIndex)
   {
     kubernetesVersionsJsonList[kubernetesVersionsIndex].AsString(m_kubernetesVersions[kubernetesVersionsIndex]);
   }
   payload.WithArray("kubernetesVersions", std::move(kubernetesVersionsJsonList));

  }

  if(m_statusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
   for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
   {
     statusesJsonList[statusesIndex].AsString(InsightStatusValueMapper::GetNameForInsightStatusValue(m_statuses[statusesIndex]));
   }
   payload.WithArray("statuses", std::move(statusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws

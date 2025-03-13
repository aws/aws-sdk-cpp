/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/InsightSummary.h>
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

InsightSummary::InsightSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

InsightSummary& InsightSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = CategoryMapper::GetCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kubernetesVersion"))
  {
    m_kubernetesVersion = jsonValue.GetString("kubernetesVersion");
    m_kubernetesVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRefreshTime"))
  {
    m_lastRefreshTime = jsonValue.GetDouble("lastRefreshTime");
    m_lastRefreshTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastTransitionTime"))
  {
    m_lastTransitionTime = jsonValue.GetDouble("lastTransitionTime");
    m_lastTransitionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("insightStatus"))
  {
    m_insightStatus = jsonValue.GetObject("insightStatus");
    m_insightStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", CategoryMapper::GetNameForCategory(m_category));
  }

  if(m_kubernetesVersionHasBeenSet)
  {
   payload.WithString("kubernetesVersion", m_kubernetesVersion);

  }

  if(m_lastRefreshTimeHasBeenSet)
  {
   payload.WithDouble("lastRefreshTime", m_lastRefreshTime.SecondsWithMSPrecision());
  }

  if(m_lastTransitionTimeHasBeenSet)
  {
   payload.WithDouble("lastTransitionTime", m_lastTransitionTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_insightStatusHasBeenSet)
  {
   payload.WithObject("insightStatus", m_insightStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws

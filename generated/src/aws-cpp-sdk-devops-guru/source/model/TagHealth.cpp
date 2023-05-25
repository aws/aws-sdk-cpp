/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/TagHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

TagHealth::TagHealth() : 
    m_appBoundaryKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_insightHasBeenSet(false),
    m_analyzedResourceCount(0),
    m_analyzedResourceCountHasBeenSet(false)
{
}

TagHealth::TagHealth(JsonView jsonValue) : 
    m_appBoundaryKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_insightHasBeenSet(false),
    m_analyzedResourceCount(0),
    m_analyzedResourceCountHasBeenSet(false)
{
  *this = jsonValue;
}

TagHealth& TagHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppBoundaryKey"))
  {
    m_appBoundaryKey = jsonValue.GetString("AppBoundaryKey");

    m_appBoundaryKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValue"))
  {
    m_tagValue = jsonValue.GetString("TagValue");

    m_tagValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Insight"))
  {
    m_insight = jsonValue.GetObject("Insight");

    m_insightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalyzedResourceCount"))
  {
    m_analyzedResourceCount = jsonValue.GetInt64("AnalyzedResourceCount");

    m_analyzedResourceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue TagHealth::Jsonize() const
{
  JsonValue payload;

  if(m_appBoundaryKeyHasBeenSet)
  {
   payload.WithString("AppBoundaryKey", m_appBoundaryKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("TagValue", m_tagValue);

  }

  if(m_insightHasBeenSet)
  {
   payload.WithObject("Insight", m_insight.Jsonize());

  }

  if(m_analyzedResourceCountHasBeenSet)
  {
   payload.WithInt64("AnalyzedResourceCount", m_analyzedResourceCount);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

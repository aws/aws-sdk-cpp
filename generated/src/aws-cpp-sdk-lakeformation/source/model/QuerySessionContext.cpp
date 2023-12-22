/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/QuerySessionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

QuerySessionContext::QuerySessionContext() : 
    m_queryIdHasBeenSet(false),
    m_queryStartTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_queryAuthorizationIdHasBeenSet(false),
    m_additionalContextHasBeenSet(false)
{
}

QuerySessionContext::QuerySessionContext(JsonView jsonValue) : 
    m_queryIdHasBeenSet(false),
    m_queryStartTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_queryAuthorizationIdHasBeenSet(false),
    m_additionalContextHasBeenSet(false)
{
  *this = jsonValue;
}

QuerySessionContext& QuerySessionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

    m_queryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStartTime"))
  {
    m_queryStartTime = jsonValue.GetDouble("QueryStartTime");

    m_queryStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryAuthorizationId"))
  {
    m_queryAuthorizationId = jsonValue.GetString("QueryAuthorizationId");

    m_queryAuthorizationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalContext"))
  {
    Aws::Map<Aws::String, JsonView> additionalContextJsonMap = jsonValue.GetObject("AdditionalContext").GetAllObjects();
    for(auto& additionalContextItem : additionalContextJsonMap)
    {
      m_additionalContext[additionalContextItem.first] = additionalContextItem.second.AsString();
    }
    m_additionalContextHasBeenSet = true;
  }

  return *this;
}

JsonValue QuerySessionContext::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_queryStartTimeHasBeenSet)
  {
   payload.WithDouble("QueryStartTime", m_queryStartTime.SecondsWithMSPrecision());
  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_queryAuthorizationIdHasBeenSet)
  {
   payload.WithString("QueryAuthorizationId", m_queryAuthorizationId);

  }

  if(m_additionalContextHasBeenSet)
  {
   JsonValue additionalContextJsonMap;
   for(auto& additionalContextItem : m_additionalContext)
   {
     additionalContextJsonMap.WithString(additionalContextItem.first, additionalContextItem.second);
   }
   payload.WithObject("AdditionalContext", std::move(additionalContextJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

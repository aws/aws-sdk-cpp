/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/LambdaFunctionAggregationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

LambdaFunctionAggregationResponse::LambdaFunctionAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_lambdaTagsHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

LambdaFunctionAggregationResponse::LambdaFunctionAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_lambdaTagsHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionAggregationResponse& LambdaFunctionAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionName"))
  {
    m_functionName = jsonValue.GetString("functionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaTags"))
  {
    Aws::Map<Aws::String, JsonView> lambdaTagsJsonMap = jsonValue.GetObject("lambdaTags").GetAllObjects();
    for(auto& lambdaTagsItem : lambdaTagsJsonMap)
    {
      m_lambdaTags[lambdaTagsItem.first] = lambdaTagsItem.second.AsString();
    }
    m_lambdaTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = jsonValue.GetString("runtime");

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");

    m_severityCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("functionName", m_functionName);

  }

  if(m_lambdaTagsHasBeenSet)
  {
   JsonValue lambdaTagsJsonMap;
   for(auto& lambdaTagsItem : m_lambdaTags)
   {
     lambdaTagsJsonMap.WithString(lambdaTagsItem.first, lambdaTagsItem.second);
   }
   payload.WithObject("lambdaTags", std::move(lambdaTagsJsonMap));

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", m_runtime);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws

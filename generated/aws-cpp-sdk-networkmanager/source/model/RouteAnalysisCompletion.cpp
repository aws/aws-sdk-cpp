/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysisCompletion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

RouteAnalysisCompletion::RouteAnalysisCompletion() : 
    m_resultCode(RouteAnalysisCompletionResultCode::NOT_SET),
    m_resultCodeHasBeenSet(false),
    m_reasonCode(RouteAnalysisCompletionReasonCode::NOT_SET),
    m_reasonCodeHasBeenSet(false),
    m_reasonContextHasBeenSet(false)
{
}

RouteAnalysisCompletion::RouteAnalysisCompletion(JsonView jsonValue) : 
    m_resultCode(RouteAnalysisCompletionResultCode::NOT_SET),
    m_resultCodeHasBeenSet(false),
    m_reasonCode(RouteAnalysisCompletionReasonCode::NOT_SET),
    m_reasonCodeHasBeenSet(false),
    m_reasonContextHasBeenSet(false)
{
  *this = jsonValue;
}

RouteAnalysisCompletion& RouteAnalysisCompletion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultCode"))
  {
    m_resultCode = RouteAnalysisCompletionResultCodeMapper::GetRouteAnalysisCompletionResultCodeForName(jsonValue.GetString("ResultCode"));

    m_resultCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = RouteAnalysisCompletionReasonCodeMapper::GetRouteAnalysisCompletionReasonCodeForName(jsonValue.GetString("ReasonCode"));

    m_reasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReasonContext"))
  {
    Aws::Map<Aws::String, JsonView> reasonContextJsonMap = jsonValue.GetObject("ReasonContext").GetAllObjects();
    for(auto& reasonContextItem : reasonContextJsonMap)
    {
      m_reasonContext[reasonContextItem.first] = reasonContextItem.second.AsString();
    }
    m_reasonContextHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteAnalysisCompletion::Jsonize() const
{
  JsonValue payload;

  if(m_resultCodeHasBeenSet)
  {
   payload.WithString("ResultCode", RouteAnalysisCompletionResultCodeMapper::GetNameForRouteAnalysisCompletionResultCode(m_resultCode));
  }

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("ReasonCode", RouteAnalysisCompletionReasonCodeMapper::GetNameForRouteAnalysisCompletionReasonCode(m_reasonCode));
  }

  if(m_reasonContextHasBeenSet)
  {
   JsonValue reasonContextJsonMap;
   for(auto& reasonContextItem : m_reasonContext)
   {
     reasonContextJsonMap.WithString(reasonContextItem.first, reasonContextItem.second);
   }
   payload.WithObject("ReasonContext", std::move(reasonContextJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

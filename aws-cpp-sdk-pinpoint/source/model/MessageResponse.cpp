/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/MessageResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MessageResponse::MessageResponse() : 
    m_applicationIdHasBeenSet(false),
    m_endpointResultHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

MessageResponse::MessageResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_endpointResultHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

MessageResponse& MessageResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointResult"))
  {
    Aws::Map<Aws::String, JsonView> endpointResultJsonMap = jsonValue.GetObject("EndpointResult").GetAllObjects();
    for(auto& endpointResultItem : endpointResultJsonMap)
    {
      m_endpointResult[endpointResultItem.first] = endpointResultItem.second.AsObject();
    }
    m_endpointResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Result"))
  {
    Aws::Map<Aws::String, JsonView> resultJsonMap = jsonValue.GetObject("Result").GetAllObjects();
    for(auto& resultItem : resultJsonMap)
    {
      m_result[resultItem.first] = resultItem.second.AsObject();
    }
    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_endpointResultHasBeenSet)
  {
   JsonValue endpointResultJsonMap;
   for(auto& endpointResultItem : m_endpointResult)
   {
     endpointResultJsonMap.WithObject(endpointResultItem.first, endpointResultItem.second.Jsonize());
   }
   payload.WithObject("EndpointResult", std::move(endpointResultJsonMap));

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  if(m_resultHasBeenSet)
  {
   JsonValue resultJsonMap;
   for(auto& resultItem : m_result)
   {
     resultJsonMap.WithObject(resultItem.first, resultItem.second.Jsonize());
   }
   payload.WithObject("Result", std::move(resultJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

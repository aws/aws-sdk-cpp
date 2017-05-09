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

#include <aws/xray/model/TraceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

TraceSummary::TraceSummary() : 
    m_idHasBeenSet(false),
    m_duration(0.0),
    m_durationHasBeenSet(false),
    m_responseTime(0.0),
    m_responseTimeHasBeenSet(false),
    m_hasFault(false),
    m_hasFaultHasBeenSet(false),
    m_hasError(false),
    m_hasErrorHasBeenSet(false),
    m_hasThrottle(false),
    m_hasThrottleHasBeenSet(false),
    m_isPartial(false),
    m_isPartialHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
}

TraceSummary::TraceSummary(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_duration(0.0),
    m_durationHasBeenSet(false),
    m_responseTime(0.0),
    m_responseTimeHasBeenSet(false),
    m_hasFault(false),
    m_hasFaultHasBeenSet(false),
    m_hasError(false),
    m_hasErrorHasBeenSet(false),
    m_hasThrottle(false),
    m_hasThrottleHasBeenSet(false),
    m_isPartial(false),
    m_isPartialHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

TraceSummary& TraceSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetDouble("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseTime"))
  {
    m_responseTime = jsonValue.GetDouble("ResponseTime");

    m_responseTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasFault"))
  {
    m_hasFault = jsonValue.GetBool("HasFault");

    m_hasFaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasError"))
  {
    m_hasError = jsonValue.GetBool("HasError");

    m_hasErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasThrottle"))
  {
    m_hasThrottle = jsonValue.GetBool("HasThrottle");

    m_hasThrottleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsPartial"))
  {
    m_isPartial = jsonValue.GetBool("IsPartial");

    m_isPartialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Http"))
  {
    m_http = jsonValue.GetObject("Http");

    m_httpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Annotations"))
  {
    Aws::Map<Aws::String, JsonValue> annotationsJsonMap = jsonValue.GetObject("Annotations").GetAllObjects();
    for(auto& annotationsItem : annotationsJsonMap)
    {
      Array<JsonValue> valuesWithServiceIdsJsonList = annotationsItem.second.AsArray();
      Aws::Vector<ValueWithServiceIds> valuesWithServiceIdsList;
      valuesWithServiceIdsList.reserve((size_t)valuesWithServiceIdsJsonList.GetLength());
      for(unsigned valuesWithServiceIdsIndex = 0; valuesWithServiceIdsIndex < valuesWithServiceIdsJsonList.GetLength(); ++valuesWithServiceIdsIndex)
      {
        valuesWithServiceIdsList.push_back(valuesWithServiceIdsJsonList[valuesWithServiceIdsIndex].AsObject());
      }
      m_annotations[annotationsItem.first] = std::move(valuesWithServiceIdsList);
    }
    m_annotationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Users"))
  {
    Array<JsonValue> usersJsonList = jsonValue.GetArray("Users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
    m_usersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceIds"))
  {
    Array<JsonValue> serviceIdsJsonList = jsonValue.GetArray("ServiceIds");
    for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
    {
      m_serviceIds.push_back(serviceIdsJsonList[serviceIdsIndex].AsObject());
    }
    m_serviceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue TraceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("Duration", m_duration);

  }

  if(m_responseTimeHasBeenSet)
  {
   payload.WithDouble("ResponseTime", m_responseTime);

  }

  if(m_hasFaultHasBeenSet)
  {
   payload.WithBool("HasFault", m_hasFault);

  }

  if(m_hasErrorHasBeenSet)
  {
   payload.WithBool("HasError", m_hasError);

  }

  if(m_hasThrottleHasBeenSet)
  {
   payload.WithBool("HasThrottle", m_hasThrottle);

  }

  if(m_isPartialHasBeenSet)
  {
   payload.WithBool("IsPartial", m_isPartial);

  }

  if(m_httpHasBeenSet)
  {
   payload.WithObject("Http", m_http.Jsonize());

  }

  if(m_annotationsHasBeenSet)
  {
   JsonValue annotationsJsonMap;
   for(auto& annotationsItem : m_annotations)
   {
     Array<JsonValue> valuesWithServiceIdsJsonList(annotationsItem.second.size());
     for(unsigned valuesWithServiceIdsIndex = 0; valuesWithServiceIdsIndex < valuesWithServiceIdsJsonList.GetLength(); ++valuesWithServiceIdsIndex)
     {
       valuesWithServiceIdsJsonList[valuesWithServiceIdsIndex].AsObject(annotationsItem.second[valuesWithServiceIdsIndex].Jsonize());
     }
     annotationsJsonMap.WithArray(annotationsItem.first, std::move(valuesWithServiceIdsJsonList));
   }
   payload.WithObject("Annotations", std::move(annotationsJsonMap));

  }

  if(m_usersHasBeenSet)
  {
   Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
   }
   payload.WithArray("Users", std::move(usersJsonList));

  }

  if(m_serviceIdsHasBeenSet)
  {
   Array<JsonValue> serviceIdsJsonList(m_serviceIds.size());
   for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
   {
     serviceIdsJsonList[serviceIdsIndex].AsObject(m_serviceIds[serviceIdsIndex].Jsonize());
   }
   payload.WithArray("ServiceIds", std::move(serviceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
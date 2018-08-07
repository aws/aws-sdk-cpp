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

#include <aws/pinpoint/model/EventsRequest.h>
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

EventsRequest::EventsRequest() : 
    m_batchItemHasBeenSet(false)
{
}

EventsRequest::EventsRequest(JsonView jsonValue) : 
    m_batchItemHasBeenSet(false)
{
  *this = jsonValue;
}

EventsRequest& EventsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchItem"))
  {
    Aws::Map<Aws::String, JsonView> batchItemJsonMap = jsonValue.GetObject("BatchItem").GetAllObjects();
    for(auto& batchItemItem : batchItemJsonMap)
    {
      m_batchItem[batchItemItem.first] = batchItemItem.second.AsObject();
    }
    m_batchItemHasBeenSet = true;
  }

  return *this;
}

JsonValue EventsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_batchItemHasBeenSet)
  {
   JsonValue batchItemJsonMap;
   for(auto& batchItemItem : m_batchItem)
   {
     batchItemJsonMap.WithObject(batchItemItem.first, batchItemItem.second.Jsonize());
   }
   payload.WithObject("BatchItem", std::move(batchItemJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

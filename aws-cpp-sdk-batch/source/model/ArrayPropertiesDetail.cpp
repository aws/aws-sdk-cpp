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

#include <aws/batch/model/ArrayPropertiesDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ArrayPropertiesDetail::ArrayPropertiesDetail() : 
    m_statusSummaryHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
}

ArrayPropertiesDetail::ArrayPropertiesDetail(const JsonValue& jsonValue) : 
    m_statusSummaryHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
  *this = jsonValue;
}

ArrayPropertiesDetail& ArrayPropertiesDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("statusSummary"))
  {
    Aws::Map<Aws::String, JsonValue> statusSummaryJsonMap = jsonValue.GetObject("statusSummary").GetAllObjects();
    for(auto& statusSummaryItem : statusSummaryJsonMap)
    {
      m_statusSummary[statusSummaryItem.first] = statusSummaryItem.second.AsInteger();
    }
    m_statusSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");

    m_indexHasBeenSet = true;
  }

  return *this;
}

JsonValue ArrayPropertiesDetail::Jsonize() const
{
  JsonValue payload;

  if(m_statusSummaryHasBeenSet)
  {
   JsonValue statusSummaryJsonMap;
   for(auto& statusSummaryItem : m_statusSummary)
   {
     statusSummaryJsonMap.WithInteger(statusSummaryItem.first, statusSummaryItem.second);
   }
   payload.WithObject("statusSummary", std::move(statusSummaryJsonMap));

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws

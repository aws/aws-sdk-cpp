/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ArrayPropertiesDetail::ArrayPropertiesDetail(JsonView jsonValue) : 
    m_statusSummaryHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
  *this = jsonValue;
}

ArrayPropertiesDetail& ArrayPropertiesDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusSummary"))
  {
    Aws::Map<Aws::String, JsonView> statusSummaryJsonMap = jsonValue.GetObject("statusSummary").GetAllObjects();
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

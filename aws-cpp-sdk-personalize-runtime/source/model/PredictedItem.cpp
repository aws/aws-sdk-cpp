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

#include <aws/personalize-runtime/model/PredictedItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

PredictedItem::PredictedItem() : 
    m_itemIdHasBeenSet(false)
{
}

PredictedItem::PredictedItem(JsonView jsonValue) : 
    m_itemIdHasBeenSet(false)
{
  *this = jsonValue;
}

PredictedItem& PredictedItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemId"))
  {
    m_itemId = jsonValue.GetString("itemId");

    m_itemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictedItem::Jsonize() const
{
  JsonValue payload;

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws

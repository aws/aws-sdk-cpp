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

#include <aws/marketplace-catalog/model/ChangeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

ChangeSummary::ChangeSummary() : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_errorDetailListHasBeenSet(false)
{
}

ChangeSummary::ChangeSummary(JsonView jsonValue) : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_errorDetailListHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeSummary& ChangeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeType"))
  {
    m_changeType = jsonValue.GetString("ChangeType");

    m_changeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entity"))
  {
    m_entity = jsonValue.GetObject("Entity");

    m_entityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetailList"))
  {
    Array<JsonView> errorDetailListJsonList = jsonValue.GetArray("ErrorDetailList");
    for(unsigned errorDetailListIndex = 0; errorDetailListIndex < errorDetailListJsonList.GetLength(); ++errorDetailListIndex)
    {
      m_errorDetailList.push_back(errorDetailListJsonList[errorDetailListIndex].AsObject());
    }
    m_errorDetailListHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("ChangeType", m_changeType);

  }

  if(m_entityHasBeenSet)
  {
   payload.WithObject("Entity", m_entity.Jsonize());

  }

  if(m_errorDetailListHasBeenSet)
  {
   Array<JsonValue> errorDetailListJsonList(m_errorDetailList.size());
   for(unsigned errorDetailListIndex = 0; errorDetailListIndex < errorDetailListJsonList.GetLength(); ++errorDetailListIndex)
   {
     errorDetailListJsonList[errorDetailListIndex].AsObject(m_errorDetailList[errorDetailListIndex].Jsonize());
   }
   payload.WithArray("ErrorDetailList", std::move(errorDetailListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws

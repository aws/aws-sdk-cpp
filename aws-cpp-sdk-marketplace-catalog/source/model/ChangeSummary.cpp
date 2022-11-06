/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_detailsHasBeenSet(false),
    m_errorDetailListHasBeenSet(false),
    m_changeNameHasBeenSet(false)
{
}

ChangeSummary::ChangeSummary(JsonView jsonValue) : 
    m_changeTypeHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_errorDetailListHasBeenSet(false),
    m_changeNameHasBeenSet(false)
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

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetailList"))
  {
    Aws::Utils::Array<JsonView> errorDetailListJsonList = jsonValue.GetArray("ErrorDetailList");
    for(unsigned errorDetailListIndex = 0; errorDetailListIndex < errorDetailListJsonList.GetLength(); ++errorDetailListIndex)
    {
      m_errorDetailList.push_back(errorDetailListJsonList[errorDetailListIndex].AsObject());
    }
    m_errorDetailListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeName"))
  {
    m_changeName = jsonValue.GetString("ChangeName");

    m_changeNameHasBeenSet = true;
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

  if(m_detailsHasBeenSet)
  {
   payload.WithString("Details", m_details);

  }

  if(m_errorDetailListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorDetailListJsonList(m_errorDetailList.size());
   for(unsigned errorDetailListIndex = 0; errorDetailListIndex < errorDetailListJsonList.GetLength(); ++errorDetailListIndex)
   {
     errorDetailListJsonList[errorDetailListIndex].AsObject(m_errorDetailList[errorDetailListIndex].Jsonize());
   }
   payload.WithArray("ErrorDetailList", std::move(errorDetailListJsonList));

  }

  if(m_changeNameHasBeenSet)
  {
   payload.WithString("ChangeName", m_changeName);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws

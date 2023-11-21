/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CompositionRelationshipItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

CompositionRelationshipItem::CompositionRelationshipItem() : 
    m_idHasBeenSet(false)
{
}

CompositionRelationshipItem::CompositionRelationshipItem(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

CompositionRelationshipItem& CompositionRelationshipItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue CompositionRelationshipItem::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

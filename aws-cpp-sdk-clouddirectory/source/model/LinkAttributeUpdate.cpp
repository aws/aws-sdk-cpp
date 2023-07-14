/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/LinkAttributeUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

LinkAttributeUpdate::LinkAttributeUpdate() : 
    m_attributeKeyHasBeenSet(false),
    m_attributeActionHasBeenSet(false)
{
}

LinkAttributeUpdate::LinkAttributeUpdate(JsonView jsonValue) : 
    m_attributeKeyHasBeenSet(false),
    m_attributeActionHasBeenSet(false)
{
  *this = jsonValue;
}

LinkAttributeUpdate& LinkAttributeUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeKey"))
  {
    m_attributeKey = jsonValue.GetObject("AttributeKey");

    m_attributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeAction"))
  {
    m_attributeAction = jsonValue.GetObject("AttributeAction");

    m_attributeActionHasBeenSet = true;
  }

  return *this;
}

JsonValue LinkAttributeUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeKeyHasBeenSet)
  {
   payload.WithObject("AttributeKey", m_attributeKey.Jsonize());

  }

  if(m_attributeActionHasBeenSet)
  {
   payload.WithObject("AttributeAction", m_attributeAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

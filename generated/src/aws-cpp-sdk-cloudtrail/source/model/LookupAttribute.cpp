/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/LookupAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

LookupAttribute::LookupAttribute() : 
    m_attributeKey(LookupAttributeKey::NOT_SET),
    m_attributeKeyHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

LookupAttribute::LookupAttribute(JsonView jsonValue) : 
    m_attributeKey(LookupAttributeKey::NOT_SET),
    m_attributeKeyHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

LookupAttribute& LookupAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeKey"))
  {
    m_attributeKey = LookupAttributeKeyMapper::GetLookupAttributeKeyForName(jsonValue.GetString("AttributeKey"));

    m_attributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValue"))
  {
    m_attributeValue = jsonValue.GetString("AttributeValue");

    m_attributeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue LookupAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_attributeKeyHasBeenSet)
  {
   payload.WithString("AttributeKey", LookupAttributeKeyMapper::GetNameForLookupAttributeKey(m_attributeKey));
  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("AttributeValue", m_attributeValue);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

LookupAttribute::LookupAttribute(const JsonValue& jsonValue) : 
    m_attributeKey(LookupAttributeKey::NOT_SET),
    m_attributeKeyHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

LookupAttribute& LookupAttribute::operator =(const JsonValue& jsonValue)
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
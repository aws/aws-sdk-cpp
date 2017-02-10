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
#include <aws/clouddirectory/model/ObjectAttributeRange.h>
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

ObjectAttributeRange::ObjectAttributeRange() : 
    m_attributeKeyHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

ObjectAttributeRange::ObjectAttributeRange(const JsonValue& jsonValue) : 
    m_attributeKeyHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectAttributeRange& ObjectAttributeRange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AttributeKey"))
  {
    m_attributeKey = jsonValue.GetObject("AttributeKey");

    m_attributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");

    m_rangeHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectAttributeRange::Jsonize() const
{
  JsonValue payload;

  if(m_attributeKeyHasBeenSet)
  {
   payload.WithObject("AttributeKey", m_attributeKey.Jsonize());

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
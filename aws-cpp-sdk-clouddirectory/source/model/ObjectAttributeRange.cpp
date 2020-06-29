/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ObjectAttributeRange::ObjectAttributeRange(JsonView jsonValue) : 
    m_attributeKeyHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectAttributeRange& ObjectAttributeRange::operator =(JsonView jsonValue)
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

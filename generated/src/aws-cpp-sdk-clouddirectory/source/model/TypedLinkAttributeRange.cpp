/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/TypedLinkAttributeRange.h>
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

TypedLinkAttributeRange::TypedLinkAttributeRange() : 
    m_attributeNameHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

TypedLinkAttributeRange::TypedLinkAttributeRange(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkAttributeRange& TypedLinkAttributeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");

    m_rangeHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkAttributeRange::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

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

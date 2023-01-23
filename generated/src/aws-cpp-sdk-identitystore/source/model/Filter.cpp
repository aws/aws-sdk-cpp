/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

Filter::Filter() : 
    m_attributePathHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_attributePathHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributePath"))
  {
    m_attributePath = jsonValue.GetString("AttributePath");

    m_attributePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValue"))
  {
    m_attributeValue = jsonValue.GetString("AttributeValue");

    m_attributeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_attributePathHasBeenSet)
  {
   payload.WithString("AttributePath", m_attributePath);

  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("AttributeValue", m_attributeValue);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

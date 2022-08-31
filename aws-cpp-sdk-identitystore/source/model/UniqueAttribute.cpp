/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/UniqueAttribute.h>
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

UniqueAttribute::UniqueAttribute() : 
    m_attributePathHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

UniqueAttribute::UniqueAttribute(JsonView jsonValue) : 
    m_attributePathHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

UniqueAttribute& UniqueAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributePath"))
  {
    m_attributePath = jsonValue.GetString("AttributePath");

    m_attributePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValue"))
  {
    m_attributeValue = jsonValue.GetObject("AttributeValue");

    m_attributeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue UniqueAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_attributePathHasBeenSet)
  {
   payload.WithString("AttributePath", m_attributePath);

  }

  if(m_attributeValueHasBeenSet)
  {
    if(!m_attributeValue.View().IsNull())
    {
       payload.WithObject("AttributeValue", JsonValue(m_attributeValue.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

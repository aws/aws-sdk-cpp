/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserProficiencyDisassociate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UserProficiencyDisassociate::UserProficiencyDisassociate() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

UserProficiencyDisassociate::UserProficiencyDisassociate(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = jsonValue;
}

UserProficiencyDisassociate& UserProficiencyDisassociate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValue"))
  {
    m_attributeValue = jsonValue.GetString("AttributeValue");

    m_attributeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue UserProficiencyDisassociate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("AttributeValue", m_attributeValue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

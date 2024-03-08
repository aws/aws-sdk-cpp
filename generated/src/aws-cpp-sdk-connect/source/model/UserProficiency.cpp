/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserProficiency.h>
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

UserProficiency::UserProficiency() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false),
    m_level(0.0),
    m_levelHasBeenSet(false)
{
}

UserProficiency::UserProficiency(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false),
    m_level(0.0),
    m_levelHasBeenSet(false)
{
  *this = jsonValue;
}

UserProficiency& UserProficiency::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Level"))
  {
    m_level = jsonValue.GetDouble("Level");

    m_levelHasBeenSet = true;
  }

  return *this;
}

JsonValue UserProficiency::Jsonize() const
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

  if(m_levelHasBeenSet)
  {
   payload.WithDouble("Level", m_level);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/JsonTokenTypeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

JsonTokenTypeConfiguration::JsonTokenTypeConfiguration() : 
    m_userNameAttributeFieldHasBeenSet(false),
    m_groupAttributeFieldHasBeenSet(false)
{
}

JsonTokenTypeConfiguration::JsonTokenTypeConfiguration(JsonView jsonValue) : 
    m_userNameAttributeFieldHasBeenSet(false),
    m_groupAttributeFieldHasBeenSet(false)
{
  *this = jsonValue;
}

JsonTokenTypeConfiguration& JsonTokenTypeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserNameAttributeField"))
  {
    m_userNameAttributeField = jsonValue.GetString("UserNameAttributeField");

    m_userNameAttributeFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupAttributeField"))
  {
    m_groupAttributeField = jsonValue.GetString("GroupAttributeField");

    m_groupAttributeFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue JsonTokenTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_userNameAttributeFieldHasBeenSet)
  {
   payload.WithString("UserNameAttributeField", m_userNameAttributeField);

  }

  if(m_groupAttributeFieldHasBeenSet)
  {
   payload.WithString("GroupAttributeField", m_groupAttributeField);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

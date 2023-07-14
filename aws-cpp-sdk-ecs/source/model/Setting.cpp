/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Setting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Setting::Setting() : 
    m_name(SettingName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
}

Setting::Setting(JsonView jsonValue) : 
    m_name(SettingName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
  *this = jsonValue;
}

Setting& Setting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = SettingNameMapper::GetSettingNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

    m_principalArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Setting::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", SettingNameMapper::GetNameForSettingName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ThemeValues.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifyuibuilder/model/ThemeValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ThemeValues::ThemeValues() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ThemeValues::ThemeValues(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

const ThemeValue& ThemeValues::GetValue() const{ return *m_value; }
bool ThemeValues::ValueHasBeenSet() const { return m_valueHasBeenSet; }
void ThemeValues::SetValue(const ThemeValue& value) { m_valueHasBeenSet = true; m_value = Aws::MakeShared<ThemeValue>("ThemeValues", value); }
void ThemeValues::SetValue(ThemeValue&& value) { m_valueHasBeenSet = true; m_value = Aws::MakeShared<ThemeValue>("ThemeValues", std::move(value)); }
ThemeValues& ThemeValues::WithValue(const ThemeValue& value) { SetValue(value); return *this;}
ThemeValues& ThemeValues::WithValue(ThemeValue&& value) { SetValue(std::move(value)); return *this;}

ThemeValues& ThemeValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = Aws::MakeShared<ThemeValue>("ThemeValues", jsonValue.GetObject("value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ThemeValues::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws

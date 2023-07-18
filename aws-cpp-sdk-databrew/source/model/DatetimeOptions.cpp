/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DatetimeOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

DatetimeOptions::DatetimeOptions() : 
    m_formatHasBeenSet(false),
    m_timezoneOffsetHasBeenSet(false),
    m_localeCodeHasBeenSet(false)
{
}

DatetimeOptions::DatetimeOptions(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_timezoneOffsetHasBeenSet(false),
    m_localeCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DatetimeOptions& DatetimeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimezoneOffset"))
  {
    m_timezoneOffset = jsonValue.GetString("TimezoneOffset");

    m_timezoneOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocaleCode"))
  {
    m_localeCode = jsonValue.GetString("LocaleCode");

    m_localeCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatetimeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_timezoneOffsetHasBeenSet)
  {
   payload.WithString("TimezoneOffset", m_timezoneOffset);

  }

  if(m_localeCodeHasBeenSet)
  {
   payload.WithString("LocaleCode", m_localeCode);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/DatetimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

DatetimeRange::DatetimeRange() : 
    m_beginHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

DatetimeRange::DatetimeRange(JsonView jsonValue) : 
    m_beginHasBeenSet(false),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

DatetimeRange& DatetimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Begin"))
  {
    m_begin = jsonValue.GetString("Begin");

    m_beginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetString("End");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue DatetimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginHasBeenSet)
  {
   payload.WithString("Begin", m_begin);

  }

  if(m_endHasBeenSet)
  {
   payload.WithString("End", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

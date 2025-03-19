/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Country.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Country::Country(JsonView jsonValue)
{
  *this = jsonValue;
}

Country& Country::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("countryCode"))
  {
    m_countryCode = jsonValue.GetString("countryCode");
    m_countryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("countryName"))
  {
    m_countryName = jsonValue.GetString("countryName");
    m_countryNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Country::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("countryCode", m_countryCode);

  }

  if(m_countryNameHasBeenSet)
  {
   payload.WithString("countryName", m_countryName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

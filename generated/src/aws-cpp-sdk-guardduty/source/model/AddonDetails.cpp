/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/AddonDetails.h>
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

AddonDetails::AddonDetails() : 
    m_addonVersionHasBeenSet(false),
    m_addonStatusHasBeenSet(false)
{
}

AddonDetails::AddonDetails(JsonView jsonValue) : 
    m_addonVersionHasBeenSet(false),
    m_addonStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AddonDetails& AddonDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addonVersion"))
  {
    m_addonVersion = jsonValue.GetString("addonVersion");

    m_addonVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addonStatus"))
  {
    m_addonStatus = jsonValue.GetString("addonStatus");

    m_addonStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AddonDetails::Jsonize() const
{
  JsonValue payload;

  if(m_addonVersionHasBeenSet)
  {
   payload.WithString("addonVersion", m_addonVersion);

  }

  if(m_addonStatusHasBeenSet)
  {
   payload.WithString("addonStatus", m_addonStatus);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

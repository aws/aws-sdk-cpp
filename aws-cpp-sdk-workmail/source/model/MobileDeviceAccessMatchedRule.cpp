/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MobileDeviceAccessMatchedRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

MobileDeviceAccessMatchedRule::MobileDeviceAccessMatchedRule() : 
    m_mobileDeviceAccessRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

MobileDeviceAccessMatchedRule::MobileDeviceAccessMatchedRule(JsonView jsonValue) : 
    m_mobileDeviceAccessRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

MobileDeviceAccessMatchedRule& MobileDeviceAccessMatchedRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MobileDeviceAccessRuleId"))
  {
    m_mobileDeviceAccessRuleId = jsonValue.GetString("MobileDeviceAccessRuleId");

    m_mobileDeviceAccessRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue MobileDeviceAccessMatchedRule::Jsonize() const
{
  JsonValue payload;

  if(m_mobileDeviceAccessRuleIdHasBeenSet)
  {
   payload.WithString("MobileDeviceAccessRuleId", m_mobileDeviceAccessRuleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisSessionMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisSessionMessage::CisSessionMessage() : 
    m_cisRuleDetailsHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_status(CisRuleStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CisSessionMessage::CisSessionMessage(JsonView jsonValue) : 
    m_cisRuleDetailsHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_status(CisRuleStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CisSessionMessage& CisSessionMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cisRuleDetails"))
  {
    m_cisRuleDetails = HashingUtils::Base64Decode(jsonValue.GetString("cisRuleDetails"));
    m_cisRuleDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CisRuleStatusMapper::GetCisRuleStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CisSessionMessage::Jsonize() const
{
  JsonValue payload;

  if(m_cisRuleDetailsHasBeenSet)
  {
   payload.WithString("cisRuleDetails", HashingUtils::Base64Encode(m_cisRuleDetails));
  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CisRuleStatusMapper::GetNameForCisRuleStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws

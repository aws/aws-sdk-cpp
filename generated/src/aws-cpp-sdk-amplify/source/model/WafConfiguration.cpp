/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/WafConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

WafConfiguration::WafConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

WafConfiguration& WafConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("webAclArn"))
  {
    m_webAclArn = jsonValue.GetString("webAclArn");
    m_webAclArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wafStatus"))
  {
    m_wafStatus = WafStatusMapper::GetWafStatusForName(jsonValue.GetString("wafStatus"));
    m_wafStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue WafConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_webAclArnHasBeenSet)
  {
   payload.WithString("webAclArn", m_webAclArn);

  }

  if(m_wafStatusHasBeenSet)
  {
   payload.WithString("wafStatus", WafStatusMapper::GetNameForWafStatus(m_wafStatus));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws

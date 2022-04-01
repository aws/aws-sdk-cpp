/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleGroupVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleGroupVersion::ManagedRuleGroupVersion() : 
    m_nameHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false)
{
}

ManagedRuleGroupVersion::ManagedRuleGroupVersion(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedRuleGroupVersion& ManagedRuleGroupVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");

    m_lastUpdateTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleGroupVersion::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdateTimestamp", m_lastUpdateTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws

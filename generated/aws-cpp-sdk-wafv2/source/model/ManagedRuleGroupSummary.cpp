/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleGroupSummary.h>
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

ManagedRuleGroupSummary::ManagedRuleGroupSummary() : 
    m_vendorNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ManagedRuleGroupSummary::ManagedRuleGroupSummary(JsonView jsonValue) : 
    m_vendorNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedRuleGroupSummary& ManagedRuleGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VendorName"))
  {
    m_vendorName = jsonValue.GetString("VendorName");

    m_vendorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_vendorNameHasBeenSet)
  {
   payload.WithString("VendorName", m_vendorName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws

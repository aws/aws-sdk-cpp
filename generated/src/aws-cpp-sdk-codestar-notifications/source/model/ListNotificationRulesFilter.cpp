/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/ListNotificationRulesFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

ListNotificationRulesFilter::ListNotificationRulesFilter() : 
    m_name(ListNotificationRulesFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ListNotificationRulesFilter::ListNotificationRulesFilter(JsonView jsonValue) : 
    m_name(ListNotificationRulesFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ListNotificationRulesFilter& ListNotificationRulesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ListNotificationRulesFilterNameMapper::GetListNotificationRulesFilterNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ListNotificationRulesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ListNotificationRulesFilterNameMapper::GetNameForListNotificationRulesFilterName(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

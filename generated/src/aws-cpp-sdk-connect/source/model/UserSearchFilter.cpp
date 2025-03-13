/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserSearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UserSearchFilter::UserSearchFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

UserSearchFilter& UserSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagFilter"))
  {
    m_tagFilter = jsonValue.GetObject("TagFilter");
    m_tagFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserAttributeFilter"))
  {
    m_userAttributeFilter = jsonValue.GetObject("UserAttributeFilter");
    m_userAttributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue UserSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("TagFilter", m_tagFilter.Jsonize());

  }

  if(m_userAttributeFilterHasBeenSet)
  {
   payload.WithObject("UserAttributeFilter", m_userAttributeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

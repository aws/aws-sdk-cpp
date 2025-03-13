/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserHierarchyGroupSearchFilter.h>
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

UserHierarchyGroupSearchFilter::UserHierarchyGroupSearchFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

UserHierarchyGroupSearchFilter& UserHierarchyGroupSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeFilter"))
  {
    m_attributeFilter = jsonValue.GetObject("AttributeFilter");
    m_attributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue UserHierarchyGroupSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_attributeFilterHasBeenSet)
  {
   payload.WithObject("AttributeFilter", m_attributeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

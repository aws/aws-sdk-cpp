/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentStatusSearchFilter.h>
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

AgentStatusSearchFilter::AgentStatusSearchFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentStatusSearchFilter& AgentStatusSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeFilter"))
  {
    m_attributeFilter = jsonValue.GetObject("AttributeFilter");
    m_attributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentStatusSearchFilter::Jsonize() const
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

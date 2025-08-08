/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactMetricInfo.h>
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

ContactMetricInfo::ContactMetricInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactMetricInfo& ContactMetricInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ContactMetricNameMapper::GetContactMetricNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactMetricInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ContactMetricNameMapper::GetNameForContactMetricName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

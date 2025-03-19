/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StatusReason::StatusReason(JsonView jsonValue)
{
  *this = jsonValue;
}

StatusReason& StatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reasonCode"))
  {
    m_reasonCode = jsonValue.GetString("reasonCode");
    m_reasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasonDescription"))
  {
    m_reasonDescription = jsonValue.GetString("reasonDescription");
    m_reasonDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("reasonCode", m_reasonCode);

  }

  if(m_reasonDescriptionHasBeenSet)
  {
   payload.WithString("reasonDescription", m_reasonDescription);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

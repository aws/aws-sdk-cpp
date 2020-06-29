/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StatusReason::StatusReason() : 
    m_reasonCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

StatusReason::StatusReason(JsonView jsonValue) : 
    m_reasonCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

StatusReason& StatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = jsonValue.GetString("ReasonCode");

    m_reasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue StatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("ReasonCode", m_reasonCode);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/QuotaSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

QuotaSettings::QuotaSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

QuotaSettings& QuotaSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limit"))
  {
    m_limit = jsonValue.GetInteger("limit");
    m_limitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetInteger("offset");
    m_offsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("period"))
  {
    m_period = QuotaPeriodTypeMapper::GetQuotaPeriodTypeForName(jsonValue.GetString("period"));
    m_periodHasBeenSet = true;
  }
  return *this;
}

JsonValue QuotaSettings::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("offset", m_offset);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithString("period", QuotaPeriodTypeMapper::GetNameForQuotaPeriodType(m_period));
  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws

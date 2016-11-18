/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

QuotaSettings::QuotaSettings() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false),
    m_period(QuotaPeriodType::NOT_SET),
    m_periodHasBeenSet(false)
{
}

QuotaSettings::QuotaSettings(const JsonValue& jsonValue) : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false),
    m_period(QuotaPeriodType::NOT_SET),
    m_periodHasBeenSet(false)
{
  *this = jsonValue;
}

QuotaSettings& QuotaSettings::operator =(const JsonValue& jsonValue)
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
/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/service-quotas/model/ServiceQuota.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

ServiceQuota::ServiceQuota() : 
    m_serviceCodeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_quotaArnHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_adjustable(false),
    m_adjustableHasBeenSet(false),
    m_globalQuota(false),
    m_globalQuotaHasBeenSet(false),
    m_usageMetricHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

ServiceQuota::ServiceQuota(JsonView jsonValue) : 
    m_serviceCodeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_quotaArnHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_adjustable(false),
    m_adjustableHasBeenSet(false),
    m_globalQuota(false),
    m_globalQuotaHasBeenSet(false),
    m_usageMetricHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceQuota& ServiceQuota::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");

    m_serviceCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuotaArn"))
  {
    m_quotaArn = jsonValue.GetString("QuotaArn");

    m_quotaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuotaCode"))
  {
    m_quotaCode = jsonValue.GetString("QuotaCode");

    m_quotaCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuotaName"))
  {
    m_quotaName = jsonValue.GetString("QuotaName");

    m_quotaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Adjustable"))
  {
    m_adjustable = jsonValue.GetBool("Adjustable");

    m_adjustableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalQuota"))
  {
    m_globalQuota = jsonValue.GetBool("GlobalQuota");

    m_globalQuotaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsageMetric"))
  {
    m_usageMetric = jsonValue.GetObject("UsageMetric");

    m_usageMetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetObject("Period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReason"))
  {
    m_errorReason = jsonValue.GetObject("ErrorReason");

    m_errorReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceQuota::Jsonize() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_quotaArnHasBeenSet)
  {
   payload.WithString("QuotaArn", m_quotaArn);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_quotaNameHasBeenSet)
  {
   payload.WithString("QuotaName", m_quotaName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  if(m_adjustableHasBeenSet)
  {
   payload.WithBool("Adjustable", m_adjustable);

  }

  if(m_globalQuotaHasBeenSet)
  {
   payload.WithBool("GlobalQuota", m_globalQuota);

  }

  if(m_usageMetricHasBeenSet)
  {
   payload.WithObject("UsageMetric", m_usageMetric.Jsonize());

  }

  if(m_periodHasBeenSet)
  {
   payload.WithObject("Period", m_period.Jsonize());

  }

  if(m_errorReasonHasBeenSet)
  {
   payload.WithObject("ErrorReason", m_errorReason.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

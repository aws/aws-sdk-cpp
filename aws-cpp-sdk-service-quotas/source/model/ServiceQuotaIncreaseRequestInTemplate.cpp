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

#include <aws/service-quotas/model/ServiceQuotaIncreaseRequestInTemplate.h>
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

ServiceQuotaIncreaseRequestInTemplate::ServiceQuotaIncreaseRequestInTemplate() : 
    m_serviceCodeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_desiredValue(0.0),
    m_desiredValueHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_globalQuota(false),
    m_globalQuotaHasBeenSet(false)
{
}

ServiceQuotaIncreaseRequestInTemplate::ServiceQuotaIncreaseRequestInTemplate(JsonView jsonValue) : 
    m_serviceCodeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_desiredValue(0.0),
    m_desiredValueHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_globalQuota(false),
    m_globalQuotaHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceQuotaIncreaseRequestInTemplate& ServiceQuotaIncreaseRequestInTemplate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DesiredValue"))
  {
    m_desiredValue = jsonValue.GetDouble("DesiredValue");

    m_desiredValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalQuota"))
  {
    m_globalQuota = jsonValue.GetBool("GlobalQuota");

    m_globalQuotaHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceQuotaIncreaseRequestInTemplate::Jsonize() const
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

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_quotaNameHasBeenSet)
  {
   payload.WithString("QuotaName", m_quotaName);

  }

  if(m_desiredValueHasBeenSet)
  {
   payload.WithDouble("DesiredValue", m_desiredValue);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  if(m_globalQuotaHasBeenSet)
  {
   payload.WithBool("GlobalQuota", m_globalQuota);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

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

#include <aws/service-quotas/model/RequestedServiceQuotaChange.h>
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

RequestedServiceQuotaChange::RequestedServiceQuotaChange() : 
    m_idHasBeenSet(false),
    m_caseIdHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_desiredValue(0.0),
    m_desiredValueHasBeenSet(false),
    m_status(RequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_requesterHasBeenSet(false),
    m_quotaArnHasBeenSet(false),
    m_globalQuota(false),
    m_globalQuotaHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

RequestedServiceQuotaChange::RequestedServiceQuotaChange(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_caseIdHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_desiredValue(0.0),
    m_desiredValueHasBeenSet(false),
    m_status(RequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_requesterHasBeenSet(false),
    m_quotaArnHasBeenSet(false),
    m_globalQuota(false),
    m_globalQuotaHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

RequestedServiceQuotaChange& RequestedServiceQuotaChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaseId"))
  {
    m_caseId = jsonValue.GetString("CaseId");

    m_caseIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RequestStatusMapper::GetRequestStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Requester"))
  {
    m_requester = jsonValue.GetString("Requester");

    m_requesterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuotaArn"))
  {
    m_quotaArn = jsonValue.GetString("QuotaArn");

    m_quotaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalQuota"))
  {
    m_globalQuota = jsonValue.GetBool("GlobalQuota");

    m_globalQuotaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestedServiceQuotaChange::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("CaseId", m_caseId);

  }

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RequestStatusMapper::GetNameForRequestStatus(m_status));
  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("Created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_requesterHasBeenSet)
  {
   payload.WithString("Requester", m_requester);

  }

  if(m_quotaArnHasBeenSet)
  {
   payload.WithString("QuotaArn", m_quotaArn);

  }

  if(m_globalQuotaHasBeenSet)
  {
   payload.WithBool("GlobalQuota", m_globalQuota);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws

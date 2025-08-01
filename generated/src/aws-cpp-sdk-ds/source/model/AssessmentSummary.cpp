/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/AssessmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

AssessmentSummary::AssessmentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AssessmentSummary& AssessmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssessmentId"))
  {
    m_assessmentId = jsonValue.GetString("AssessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");
    m_directoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");
    m_dnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateDateTime"))
  {
    m_lastUpdateDateTime = jsonValue.GetDouble("LastUpdateDateTime");
    m_lastUpdateDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerDnsIps"))
  {
    Aws::Utils::Array<JsonView> customerDnsIpsJsonList = jsonValue.GetArray("CustomerDnsIps");
    for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
    {
      m_customerDnsIps.push_back(customerDnsIpsJsonList[customerDnsIpsIndex].AsString());
    }
    m_customerDnsIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportType"))
  {
    m_reportType = jsonValue.GetString("ReportType");
    m_reportTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("AssessmentId", m_assessmentId);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateDateTime", m_lastUpdateDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_customerDnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerDnsIpsJsonList(m_customerDnsIps.size());
   for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
   {
     customerDnsIpsJsonList[customerDnsIpsIndex].AsString(m_customerDnsIps[customerDnsIpsIndex]);
   }
   payload.WithArray("CustomerDnsIps", std::move(customerDnsIpsJsonList));

  }

  if(m_reportTypeHasBeenSet)
  {
   payload.WithString("ReportType", m_reportType);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

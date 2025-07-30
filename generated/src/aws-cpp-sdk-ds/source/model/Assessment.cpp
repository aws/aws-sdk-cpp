/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/Assessment.h>
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

Assessment::Assessment(JsonView jsonValue)
{
  *this = jsonValue;
}

Assessment& Assessment::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetString("StatusCode");
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
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
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelfManagedInstanceIds"))
  {
    Aws::Utils::Array<JsonView> selfManagedInstanceIdsJsonList = jsonValue.GetArray("SelfManagedInstanceIds");
    for(unsigned selfManagedInstanceIdsIndex = 0; selfManagedInstanceIdsIndex < selfManagedInstanceIdsJsonList.GetLength(); ++selfManagedInstanceIdsIndex)
    {
      m_selfManagedInstanceIds.push_back(selfManagedInstanceIdsJsonList[selfManagedInstanceIdsIndex].AsString());
    }
    m_selfManagedInstanceIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReportType"))
  {
    m_reportType = jsonValue.GetString("ReportType");
    m_reportTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue Assessment::Jsonize() const
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

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", m_statusCode);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

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

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_selfManagedInstanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selfManagedInstanceIdsJsonList(m_selfManagedInstanceIds.size());
   for(unsigned selfManagedInstanceIdsIndex = 0; selfManagedInstanceIdsIndex < selfManagedInstanceIdsJsonList.GetLength(); ++selfManagedInstanceIdsIndex)
   {
     selfManagedInstanceIdsJsonList[selfManagedInstanceIdsIndex].AsString(m_selfManagedInstanceIds[selfManagedInstanceIdsIndex]);
   }
   payload.WithArray("SelfManagedInstanceIds", std::move(selfManagedInstanceIdsJsonList));

  }

  if(m_reportTypeHasBeenSet)
  {
   payload.WithString("ReportType", m_reportType);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetEventDataStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventDataStoreResult::GetEventDataStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEventDataStoreResult& GetEventDataStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");
    m_eventDataStoreArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EventDataStoreStatusMapper::GetEventDataStoreStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdvancedEventSelectors"))
  {
    Aws::Utils::Array<JsonView> advancedEventSelectorsJsonList = jsonValue.GetArray("AdvancedEventSelectors");
    for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
    {
      m_advancedEventSelectors.push_back(advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject());
    }
    m_advancedEventSelectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MultiRegionEnabled"))
  {
    m_multiRegionEnabled = jsonValue.GetBool("MultiRegionEnabled");
    m_multiRegionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrganizationEnabled"))
  {
    m_organizationEnabled = jsonValue.GetBool("OrganizationEnabled");
    m_organizationEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetInteger("RetentionPeriod");
    m_retentionPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TerminationProtectionEnabled"))
  {
    m_terminationProtectionEnabled = jsonValue.GetBool("TerminationProtectionEnabled");
    m_terminationProtectionEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");
    m_updatedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingMode"))
  {
    m_billingMode = BillingModeMapper::GetBillingModeForName(jsonValue.GetString("BillingMode"));
    m_billingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FederationStatus"))
  {
    m_federationStatus = FederationStatusMapper::GetFederationStatusForName(jsonValue.GetString("FederationStatus"));
    m_federationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FederationRoleArn"))
  {
    m_federationRoleArn = jsonValue.GetString("FederationRoleArn");
    m_federationRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionKeys"))
  {
    Aws::Utils::Array<JsonView> partitionKeysJsonList = jsonValue.GetArray("PartitionKeys");
    for(unsigned partitionKeysIndex = 0; partitionKeysIndex < partitionKeysJsonList.GetLength(); ++partitionKeysIndex)
    {
      m_partitionKeys.push_back(partitionKeysJsonList[partitionKeysIndex].AsObject());
    }
    m_partitionKeysHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetEventDataStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventDataStoreResult::GetEventDataStoreResult() : 
    m_status(EventDataStoreStatus::NOT_SET),
    m_multiRegionEnabled(false),
    m_organizationEnabled(false),
    m_retentionPeriod(0),
    m_terminationProtectionEnabled(false)
{
}

GetEventDataStoreResult::GetEventDataStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EventDataStoreStatus::NOT_SET),
    m_multiRegionEnabled(false),
    m_organizationEnabled(false),
    m_retentionPeriod(0),
    m_terminationProtectionEnabled(false)
{
  *this = result;
}

GetEventDataStoreResult& GetEventDataStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EventDataStoreStatusMapper::GetEventDataStoreStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("AdvancedEventSelectors"))
  {
    Aws::Utils::Array<JsonView> advancedEventSelectorsJsonList = jsonValue.GetArray("AdvancedEventSelectors");
    for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
    {
      m_advancedEventSelectors.push_back(advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("MultiRegionEnabled"))
  {
    m_multiRegionEnabled = jsonValue.GetBool("MultiRegionEnabled");

  }

  if(jsonValue.ValueExists("OrganizationEnabled"))
  {
    m_organizationEnabled = jsonValue.GetBool("OrganizationEnabled");

  }

  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetInteger("RetentionPeriod");

  }

  if(jsonValue.ValueExists("TerminationProtectionEnabled"))
  {
    m_terminationProtectionEnabled = jsonValue.GetBool("TerminationProtectionEnabled");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }



  return *this;
}

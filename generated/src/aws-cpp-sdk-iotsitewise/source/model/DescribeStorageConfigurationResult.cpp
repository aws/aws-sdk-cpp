/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeStorageConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStorageConfigurationResult::DescribeStorageConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStorageConfigurationResult& DescribeStorageConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multiLayerStorage"))
  {
    m_multiLayerStorage = jsonValue.GetObject("multiLayerStorage");
    m_multiLayerStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disassociatedDataStorage"))
  {
    m_disassociatedDataStorage = DisassociatedDataStorageStateMapper::GetDisassociatedDataStorageStateForName(jsonValue.GetString("disassociatedDataStorage"));
    m_disassociatedDataStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("retentionPeriod");
    m_retentionPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = jsonValue.GetObject("configurationStatus");
    m_configurationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");
    m_lastUpdateDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warmTier"))
  {
    m_warmTier = WarmTierStateMapper::GetWarmTierStateForName(jsonValue.GetString("warmTier"));
    m_warmTierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warmTierRetentionPeriod"))
  {
    m_warmTierRetentionPeriod = jsonValue.GetObject("warmTierRetentionPeriod");
    m_warmTierRetentionPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disallowIngestNullNaN"))
  {
    m_disallowIngestNullNaN = jsonValue.GetBool("disallowIngestNullNaN");
    m_disallowIngestNullNaNHasBeenSet = true;
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

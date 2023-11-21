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

DescribeStorageConfigurationResult::DescribeStorageConfigurationResult() : 
    m_storageType(StorageType::NOT_SET),
    m_disassociatedDataStorage(DisassociatedDataStorageState::NOT_SET),
    m_warmTier(WarmTierState::NOT_SET)
{
}

DescribeStorageConfigurationResult::DescribeStorageConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_storageType(StorageType::NOT_SET),
    m_disassociatedDataStorage(DisassociatedDataStorageState::NOT_SET),
    m_warmTier(WarmTierState::NOT_SET)
{
  *this = result;
}

DescribeStorageConfigurationResult& DescribeStorageConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));

  }

  if(jsonValue.ValueExists("multiLayerStorage"))
  {
    m_multiLayerStorage = jsonValue.GetObject("multiLayerStorage");

  }

  if(jsonValue.ValueExists("disassociatedDataStorage"))
  {
    m_disassociatedDataStorage = DisassociatedDataStorageStateMapper::GetDisassociatedDataStorageStateForName(jsonValue.GetString("disassociatedDataStorage"));

  }

  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("retentionPeriod");

  }

  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = jsonValue.GetObject("configurationStatus");

  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

  }

  if(jsonValue.ValueExists("warmTier"))
  {
    m_warmTier = WarmTierStateMapper::GetWarmTierStateForName(jsonValue.GetString("warmTier"));

  }

  if(jsonValue.ValueExists("warmTierRetentionPeriod"))
  {
    m_warmTierRetentionPeriod = jsonValue.GetObject("warmTierRetentionPeriod");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeWorkingStorageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorkingStorageResult::DescribeWorkingStorageResult() : 
    m_workingStorageUsedInBytes(0),
    m_workingStorageAllocatedInBytes(0)
{
}

DescribeWorkingStorageResult::DescribeWorkingStorageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workingStorageUsedInBytes(0),
    m_workingStorageAllocatedInBytes(0)
{
  *this = result;
}

DescribeWorkingStorageResult& DescribeWorkingStorageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("DiskIds"))
  {
    Aws::Utils::Array<JsonView> diskIdsJsonList = jsonValue.GetArray("DiskIds");
    for(unsigned diskIdsIndex = 0; diskIdsIndex < diskIdsJsonList.GetLength(); ++diskIdsIndex)
    {
      m_diskIds.push_back(diskIdsJsonList[diskIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("WorkingStorageUsedInBytes"))
  {
    m_workingStorageUsedInBytes = jsonValue.GetInt64("WorkingStorageUsedInBytes");

  }

  if(jsonValue.ValueExists("WorkingStorageAllocatedInBytes"))
  {
    m_workingStorageAllocatedInBytes = jsonValue.GetInt64("WorkingStorageAllocatedInBytes");

  }



  return *this;
}

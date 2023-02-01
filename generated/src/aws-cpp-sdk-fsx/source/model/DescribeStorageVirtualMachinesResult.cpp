/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeStorageVirtualMachinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStorageVirtualMachinesResult::DescribeStorageVirtualMachinesResult()
{
}

DescribeStorageVirtualMachinesResult::DescribeStorageVirtualMachinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStorageVirtualMachinesResult& DescribeStorageVirtualMachinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageVirtualMachines"))
  {
    Aws::Utils::Array<JsonView> storageVirtualMachinesJsonList = jsonValue.GetArray("StorageVirtualMachines");
    for(unsigned storageVirtualMachinesIndex = 0; storageVirtualMachinesIndex < storageVirtualMachinesJsonList.GetLength(); ++storageVirtualMachinesIndex)
    {
      m_storageVirtualMachines.push_back(storageVirtualMachinesJsonList[storageVirtualMachinesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

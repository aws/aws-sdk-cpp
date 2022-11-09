/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/ListVirtualMachinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualMachinesResult::ListVirtualMachinesResult()
{
}

ListVirtualMachinesResult::ListVirtualMachinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVirtualMachinesResult& ListVirtualMachinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("VirtualMachines"))
  {
    Aws::Utils::Array<JsonView> virtualMachinesJsonList = jsonValue.GetArray("VirtualMachines");
    for(unsigned virtualMachinesIndex = 0; virtualMachinesIndex < virtualMachinesJsonList.GetLength(); ++virtualMachinesIndex)
    {
      m_virtualMachines.push_back(virtualMachinesJsonList[virtualMachinesIndex].AsObject());
    }
  }



  return *this;
}

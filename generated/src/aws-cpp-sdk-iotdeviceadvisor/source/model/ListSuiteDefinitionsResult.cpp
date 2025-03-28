﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSuiteDefinitionsResult::ListSuiteDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSuiteDefinitionsResult& ListSuiteDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suiteDefinitionInformationList"))
  {
    Aws::Utils::Array<JsonView> suiteDefinitionInformationListJsonList = jsonValue.GetArray("suiteDefinitionInformationList");
    for(unsigned suiteDefinitionInformationListIndex = 0; suiteDefinitionInformationListIndex < suiteDefinitionInformationListJsonList.GetLength(); ++suiteDefinitionInformationListIndex)
    {
      m_suiteDefinitionInformationList.push_back(suiteDefinitionInformationListJsonList[suiteDefinitionInformationListIndex].AsObject());
    }
    m_suiteDefinitionInformationListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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

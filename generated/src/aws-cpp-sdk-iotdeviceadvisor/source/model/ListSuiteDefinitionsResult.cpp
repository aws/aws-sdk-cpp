/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/ListSuiteDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSuiteDefinitionsResult::ListSuiteDefinitionsResult()
{
}

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
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

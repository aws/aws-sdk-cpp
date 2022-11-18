/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/UpdateApplicationSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateApplicationSettingsResult::UpdateApplicationSettingsResult()
{
}

UpdateApplicationSettingsResult::UpdateApplicationSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateApplicationSettingsResult& UpdateApplicationSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("OperationIds"))
  {
    Aws::Utils::Array<JsonView> operationIdsJsonList = jsonValue.GetArray("OperationIds");
    for(unsigned operationIdsIndex = 0; operationIdsIndex < operationIdsJsonList.GetLength(); ++operationIdsIndex)
    {
      m_operationIds.push_back(operationIdsJsonList[operationIdsIndex].AsString());
    }
  }



  return *this;
}

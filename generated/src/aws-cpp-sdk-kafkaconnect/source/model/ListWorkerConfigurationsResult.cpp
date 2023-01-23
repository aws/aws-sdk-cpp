/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ListWorkerConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkerConfigurationsResult::ListWorkerConfigurationsResult()
{
}

ListWorkerConfigurationsResult::ListWorkerConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkerConfigurationsResult& ListWorkerConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workerConfigurations"))
  {
    Aws::Utils::Array<JsonView> workerConfigurationsJsonList = jsonValue.GetArray("workerConfigurations");
    for(unsigned workerConfigurationsIndex = 0; workerConfigurationsIndex < workerConfigurationsJsonList.GetLength(); ++workerConfigurationsIndex)
    {
      m_workerConfigurations.push_back(workerConfigurationsJsonList[workerConfigurationsIndex].AsObject());
    }
  }



  return *this;
}

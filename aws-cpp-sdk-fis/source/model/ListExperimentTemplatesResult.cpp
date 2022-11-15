/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ListExperimentTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExperimentTemplatesResult::ListExperimentTemplatesResult()
{
}

ListExperimentTemplatesResult::ListExperimentTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExperimentTemplatesResult& ListExperimentTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("experimentTemplates"))
  {
    Aws::Utils::Array<JsonView> experimentTemplatesJsonList = jsonValue.GetArray("experimentTemplates");
    for(unsigned experimentTemplatesIndex = 0; experimentTemplatesIndex < experimentTemplatesJsonList.GetLength(); ++experimentTemplatesIndex)
    {
      m_experimentTemplates.push_back(experimentTemplatesJsonList[experimentTemplatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

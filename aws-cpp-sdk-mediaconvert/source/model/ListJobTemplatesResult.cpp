/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ListJobTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJobTemplatesResult::ListJobTemplatesResult()
{
}

ListJobTemplatesResult::ListJobTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJobTemplatesResult& ListJobTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobTemplates"))
  {
    Aws::Utils::Array<JsonView> jobTemplatesJsonList = jsonValue.GetArray("jobTemplates");
    for(unsigned jobTemplatesIndex = 0; jobTemplatesIndex < jobTemplatesJsonList.GetLength(); ++jobTemplatesIndex)
    {
      m_jobTemplates.push_back(jobTemplatesJsonList[jobTemplatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

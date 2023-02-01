/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogGroupFieldsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLogGroupFieldsResult::GetLogGroupFieldsResult()
{
}

GetLogGroupFieldsResult::GetLogGroupFieldsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLogGroupFieldsResult& GetLogGroupFieldsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logGroupFields"))
  {
    Aws::Utils::Array<JsonView> logGroupFieldsJsonList = jsonValue.GetArray("logGroupFields");
    for(unsigned logGroupFieldsIndex = 0; logGroupFieldsIndex < logGroupFieldsJsonList.GetLength(); ++logGroupFieldsIndex)
    {
      m_logGroupFields.push_back(logGroupFieldsJsonList[logGroupFieldsIndex].AsObject());
    }
  }



  return *this;
}

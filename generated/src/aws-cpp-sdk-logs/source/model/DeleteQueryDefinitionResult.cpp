/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeleteQueryDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteQueryDefinitionResult::DeleteQueryDefinitionResult() : 
    m_success(false)
{
}

DeleteQueryDefinitionResult::DeleteQueryDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_success(false)
{
  *this = result;
}

DeleteQueryDefinitionResult& DeleteQueryDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("success"))
  {
    m_success = jsonValue.GetBool("success");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListArchiveRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListArchiveRulesResult::ListArchiveRulesResult()
{
}

ListArchiveRulesResult::ListArchiveRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListArchiveRulesResult& ListArchiveRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("archiveRules"))
  {
    Aws::Utils::Array<JsonView> archiveRulesJsonList = jsonValue.GetArray("archiveRules");
    for(unsigned archiveRulesIndex = 0; archiveRulesIndex < archiveRulesJsonList.GetLength(); ++archiveRulesIndex)
    {
      m_archiveRules.push_back(archiveRulesJsonList[archiveRulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

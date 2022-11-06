/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ListIPSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIPSetsResult::ListIPSetsResult()
{
}

ListIPSetsResult::ListIPSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIPSetsResult& ListIPSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("IPSets"))
  {
    Aws::Utils::Array<JsonView> iPSetsJsonList = jsonValue.GetArray("IPSets");
    for(unsigned iPSetsIndex = 0; iPSetsIndex < iPSetsJsonList.GetLength(); ++iPSetsIndex)
    {
      m_iPSets.push_back(iPSetsJsonList[iPSetsIndex].AsObject());
    }
  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListWebACLsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWebACLsResult::ListWebACLsResult()
{
}

ListWebACLsResult::ListWebACLsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWebACLsResult& ListWebACLsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("WebACLs"))
  {
    Aws::Utils::Array<JsonView> webACLsJsonList = jsonValue.GetArray("WebACLs");
    for(unsigned webACLsIndex = 0; webACLsIndex < webACLsJsonList.GetLength(); ++webACLsIndex)
    {
      m_webACLs.push_back(webACLsJsonList[webACLsIndex].AsObject());
    }
  }



  return *this;
}

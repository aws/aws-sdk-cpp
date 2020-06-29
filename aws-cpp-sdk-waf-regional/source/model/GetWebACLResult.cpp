/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetWebACLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWebACLResult::GetWebACLResult()
{
}

GetWebACLResult::GetWebACLResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWebACLResult& GetWebACLResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WebACL"))
  {
    m_webACL = jsonValue.GetObject("WebACL");

  }



  return *this;
}

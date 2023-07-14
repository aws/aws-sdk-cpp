/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/CreateRegexMatchSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRegexMatchSetResult::CreateRegexMatchSetResult()
{
}

CreateRegexMatchSetResult::CreateRegexMatchSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateRegexMatchSetResult& CreateRegexMatchSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RegexMatchSet"))
  {
    m_regexMatchSet = jsonValue.GetObject("RegexMatchSet");

  }

  if(jsonValue.ValueExists("ChangeToken"))
  {
    m_changeToken = jsonValue.GetString("ChangeToken");

  }



  return *this;
}

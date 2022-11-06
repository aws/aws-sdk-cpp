/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/GetDomainSuggestionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainSuggestionsResult::GetDomainSuggestionsResult()
{
}

GetDomainSuggestionsResult::GetDomainSuggestionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDomainSuggestionsResult& GetDomainSuggestionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SuggestionsList"))
  {
    Aws::Utils::Array<JsonView> suggestionsListJsonList = jsonValue.GetArray("SuggestionsList");
    for(unsigned suggestionsListIndex = 0; suggestionsListIndex < suggestionsListJsonList.GetLength(); ++suggestionsListIndex)
    {
      m_suggestionsList.push_back(suggestionsListJsonList[suggestionsListIndex].AsObject());
    }
  }



  return *this;
}

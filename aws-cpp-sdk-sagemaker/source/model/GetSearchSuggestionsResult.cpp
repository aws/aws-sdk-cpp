/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetSearchSuggestionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSearchSuggestionsResult::GetSearchSuggestionsResult()
{
}

GetSearchSuggestionsResult::GetSearchSuggestionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSearchSuggestionsResult& GetSearchSuggestionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PropertyNameSuggestions"))
  {
    Aws::Utils::Array<JsonView> propertyNameSuggestionsJsonList = jsonValue.GetArray("PropertyNameSuggestions");
    for(unsigned propertyNameSuggestionsIndex = 0; propertyNameSuggestionsIndex < propertyNameSuggestionsJsonList.GetLength(); ++propertyNameSuggestionsIndex)
    {
      m_propertyNameSuggestions.push_back(propertyNameSuggestionsJsonList[propertyNameSuggestionsIndex].AsObject());
    }
  }



  return *this;
}

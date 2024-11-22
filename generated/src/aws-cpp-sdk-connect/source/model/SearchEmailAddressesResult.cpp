/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchEmailAddressesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchEmailAddressesResult::SearchEmailAddressesResult() : 
    m_approximateTotalCount(0)
{
}

SearchEmailAddressesResult::SearchEmailAddressesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SearchEmailAddressesResult()
{
  *this = result;
}

SearchEmailAddressesResult& SearchEmailAddressesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("EmailAddresses"))
  {
    Aws::Utils::Array<JsonView> emailAddressesJsonList = jsonValue.GetArray("EmailAddresses");
    for(unsigned emailAddressesIndex = 0; emailAddressesIndex < emailAddressesJsonList.GetLength(); ++emailAddressesIndex)
    {
      m_emailAddresses.push_back(emailAddressesJsonList[emailAddressesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

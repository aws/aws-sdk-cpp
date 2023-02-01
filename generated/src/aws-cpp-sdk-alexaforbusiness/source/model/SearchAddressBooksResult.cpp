/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/SearchAddressBooksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAddressBooksResult::SearchAddressBooksResult() : 
    m_totalCount(0)
{
}

SearchAddressBooksResult::SearchAddressBooksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalCount(0)
{
  *this = result;
}

SearchAddressBooksResult& SearchAddressBooksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AddressBooks"))
  {
    Aws::Utils::Array<JsonView> addressBooksJsonList = jsonValue.GetArray("AddressBooks");
    for(unsigned addressBooksIndex = 0; addressBooksIndex < addressBooksJsonList.GetLength(); ++addressBooksIndex)
    {
      m_addressBooks.push_back(addressBooksJsonList[addressBooksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInteger("TotalCount");

  }



  return *this;
}

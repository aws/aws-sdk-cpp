/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListAgreementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAgreementsResult::ListAgreementsResult()
{
}

ListAgreementsResult::ListAgreementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAgreementsResult& ListAgreementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Agreements"))
  {
    Aws::Utils::Array<JsonView> agreementsJsonList = jsonValue.GetArray("Agreements");
    for(unsigned agreementsIndex = 0; agreementsIndex < agreementsJsonList.GetLength(); ++agreementsIndex)
    {
      m_agreements.push_back(agreementsJsonList[agreementsIndex].AsObject());
    }
  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLensSharesResult::ListLensSharesResult()
{
}

ListLensSharesResult::ListLensSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLensSharesResult& ListLensSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LensShareSummaries"))
  {
    Aws::Utils::Array<JsonView> lensShareSummariesJsonList = jsonValue.GetArray("LensShareSummaries");
    for(unsigned lensShareSummariesIndex = 0; lensShareSummariesIndex < lensShareSummariesJsonList.GetLength(); ++lensShareSummariesIndex)
    {
      m_lensShareSummaries.push_back(lensShareSummariesJsonList[lensShareSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

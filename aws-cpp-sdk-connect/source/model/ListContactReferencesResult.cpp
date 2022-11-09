/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactReferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContactReferencesResult::ListContactReferencesResult()
{
}

ListContactReferencesResult::ListContactReferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContactReferencesResult& ListContactReferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReferenceSummaryList"))
  {
    Aws::Utils::Array<JsonView> referenceSummaryListJsonList = jsonValue.GetArray("ReferenceSummaryList");
    for(unsigned referenceSummaryListIndex = 0; referenceSummaryListIndex < referenceSummaryListJsonList.GetLength(); ++referenceSummaryListIndex)
    {
      m_referenceSummaryList.push_back(referenceSummaryListJsonList[referenceSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

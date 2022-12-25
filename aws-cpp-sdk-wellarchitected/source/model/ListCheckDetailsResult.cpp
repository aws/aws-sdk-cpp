/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListCheckDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCheckDetailsResult::ListCheckDetailsResult()
{
}

ListCheckDetailsResult::ListCheckDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCheckDetailsResult& ListCheckDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CheckDetails"))
  {
    Aws::Utils::Array<JsonView> checkDetailsJsonList = jsonValue.GetArray("CheckDetails");
    for(unsigned checkDetailsIndex = 0; checkDetailsIndex < checkDetailsJsonList.GetLength(); ++checkDetailsIndex)
    {
      m_checkDetails.push_back(checkDetailsJsonList[checkDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

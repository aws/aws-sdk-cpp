/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ListAssociatedFleetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociatedFleetsResult::ListAssociatedFleetsResult()
{
}

ListAssociatedFleetsResult::ListAssociatedFleetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociatedFleetsResult& ListAssociatedFleetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Names"))
  {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
